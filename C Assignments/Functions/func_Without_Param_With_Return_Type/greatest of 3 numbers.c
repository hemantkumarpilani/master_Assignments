//Greatest of 3 numbers
#include<stdio.h>
int greatest_number ();
void main(){
	int a;
	a=greatest_number(); 
	printf("%d is greater no \n", a);
}
int greatest_number (){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the value of c \n");
	scanf("%d",&c);
	if ((a>b)&&(a>c)){
		return a;
	}
	else if ((b>a)&&(b>c)){
		return b;
	}
	else if ((c>a)&&(c>b)){
		return c;
	}
}
