#include<stdio.h>
typedef class complex{
	int r;
	int img;
	
	public:
		
	complex(){
		this->r=0;
		this->img=0;
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
	
	complex add (complex c2){
		complex temp;
		temp.r= this->r+c2.r;
		temp.img= this->img+c2.img;
		return temp;
	}
	
	void display_complex(){
	printf("Complex no is %d+%di\n",r,img);
	}
	
}comp;

int main (){
	int r,img;
	printf("Enter real no\n");
	scanf("%d",&r);
	printf("Enter imaginary no\n");
	scanf("%d",&img);
	comp c1,c2,c3;
	c1.setreal(r);
	c1.setimaginary(img);
	c1.display_complex();
	printf("Enter real no\n");
	scanf("%d",&r);
	printf("Enter imaginary no\n");
	scanf("%d",&img);
	c2.setreal(r);
	c2.setimaginary(img);
	c2.display_complex();
	c3= c1.add(c2);
	printf("Addition of two complex number is = %d+%di\n",c3.getreal(),c3.getimaginary());
	return 0;
}
