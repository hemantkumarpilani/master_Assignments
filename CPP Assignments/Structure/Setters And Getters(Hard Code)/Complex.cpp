#include<stdio.h>
typedef struct complex{
	int r;
	int img;
	
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
	
}comp;

int main (){
	comp c1;
	c1.setreal(10);
	c1.setimaginary(20);
	c1.display_complex();
	return 0;
}
