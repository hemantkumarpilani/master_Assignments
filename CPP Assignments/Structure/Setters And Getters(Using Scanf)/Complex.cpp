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
	
}comp;

int main (){
	int r,img;
	printf("Enter real no\n");
	scanf("%d",&r);
	printf("Enter imaginary no\n");
	scanf("%d",&img);
	comp c1;
	c1.setreal(r);
	c1.setimaginary(img);
	printf("Complex no is %d+%di",c1.getreal(),c1.getimaginary());
	return 0;
}
