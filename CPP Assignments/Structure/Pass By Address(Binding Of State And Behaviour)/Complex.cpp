#include<stdio.h>
typedef struct complex{
	int r;
	int img;
	
	void store_complex(){
	printf("Enter real no \n");
	scanf("%d",&r);
	printf("Ente imaginary no \n");
	scanf("%d",&img);
	}
	
	void display_complex(){
	printf("Complex no is %d+%di",r,img);
	}
}comp;

int main (){
	comp c1;
	c1.store_complex();
	c1.display_complex();
	return 0;
}
