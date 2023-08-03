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
	
	complex operator++ (int a){
		complex temp;
		temp.r= this->r++;
		temp.img= this->img++;
		return temp;
	}
	
	complex operator++(){
		complex temp;
		temp.r= ++this->r;
		temp.img= ++this->img;
		return temp;
	}
	void display_complex(){
	printf("Complex no is %d+%di\n",r,img);
	}
	
}comp;

int main (){
	int r,img;
	comp c1,c2,c3;
	printf("Enter real no\n");
	scanf("%d",&r);
	printf("Enter imaginary no\n");
	scanf("%d",&img);
	
	c1.setreal(r);
	c1.setimaginary(img);
	c1.display_complex();
	
	c2= c1++;
	c1.display_complex();
	c2.display_complex();
	
	c3= ++c1;
	c1.display_complex();
	c3.display_complex();
	return 0;
}
