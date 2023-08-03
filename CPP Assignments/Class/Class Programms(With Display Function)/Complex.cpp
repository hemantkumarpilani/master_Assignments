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
	
	void display_complex(){
	printf("Complex no is %d+%di",r,img);
	}
	
}cmp;

int main (){
	int r,img;
	printf("Enter real no\n");
	scanf("%d",&r);
	printf("Enter imaginary no\n");
	scanf("%d",&img);
	cmp c1,c2(5,6);
	c1.setreal(r);
	c1.setimaginary(img);
	printf("1st Complex no is %d+%di\n",c1.getreal(),c1.getimaginary());
	printf("2nd Complex no is %d+%di",c2.getreal(),c2.getimaginary());
	return 0;
}
