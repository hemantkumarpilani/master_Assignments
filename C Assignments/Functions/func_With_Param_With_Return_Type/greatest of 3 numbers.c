//Greatest of 3 numbers
#include<stdio.h>
int greatest_number (int,int,int);
void main(){
	int a,b,c,d;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the value of c \n");
	scanf("%d",&c);
	d= greatest_number(a,b,c);
	printf("%d is greater no \n", d);
}
int greatest_number (int a, int b, int c){
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
