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
	
	int operator== (complex c2){
		if ((this->r == c2.r) && (this->img == c2.img)){
			return 1;
		}
		else {
			return 0;
		}
	}
	
	void display_complex(){
	printf("Complex no is %d+%di\n",r,img);
	}
}comp;

int main (){
	int r,img;
	comp c1,c2;
	printf("Enter real no of 1st complex number\n");
	scanf("%d",&r);
	printf("Enter imaginary no of 1st complex number\n");
	scanf("%d",&img);
	
	c1.setreal(r);
	c1.setimaginary(img);
	c1.display_complex();
	
	printf("Enter real no of 2nd complex number\n");
	scanf("%d",&r);
	printf("Enter imaginary no of 2nd complex number\n");
	scanf("%d",&img);
	
	c2.setreal(r);
	c2.setimaginary(img);
	c2.display_complex();
	
	if (c1==c2){
		printf("Both complex numbers are equal\n");
	}
	else {
		printf("Both complex numbers are not equal\n");
	}
}
