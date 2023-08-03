#include<stdio.h>
typedef class complex{
	int r;
	int img;
	
	public:
		
	complex(){
		this->r=0;
		this->img=0;
	}
	
	complex(int r, int img){
		this->r= r;
		this->img= img;
	}
	
	void setreal (int real){
		this->r= real;
	}
	
	void setimaginary (int imaginary){
		this->img= imaginary;
	}
	
	int getreal (){
		return this->r;
	}
	
	int getimaginary (){
		return this->img;
	}
	
	complex operator+ (complex c2){
		complex temp;
		temp.r= this->r+c2.r;
		temp.img= this->img+c2.img;
		return temp;
	}
	
	complex operator+(int a){
		complex temp;
		temp.r= this->r+a;
		temp.img= this->img+a;
		return temp;
	}
	void display_complex(){
	printf("Complex no is %d+%di\n",r,img);
	}
	
	void display_add(){
		printf("Addition of two complex no is %d+%di\n",r,img);
	}
	
}comp;
complex operator+(int,complex);

int main (){
	int r,img;
	comp c1,c2(5,3),c3,c4,c5;
	printf("Enter real no\n");
	scanf("%d",&r);
	printf("Enter imaginary no\n");
	scanf("%d",&img);
	
	c1.setreal(r);
	c1.setimaginary(img);
	c1.display_complex();
	
	c3= c1+c2;
	c3.display_add();
	
	c4= c1+10;
	c4.display_complex();
	
	c5= 10+c1;
	c5.display_complex();
	return 0;
}

complex operator+ (int a, complex c1){
	complex temp;
	temp.setreal(c1.getreal()+a);
	temp.setimaginary(c1.getimaginary()+a);
	return temp;
}
