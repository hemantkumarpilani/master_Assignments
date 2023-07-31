//Greatest of 3 numbers
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the value of c \n");
	scanf("%d",&c);
	if ((a>b)&&(a>c)){
		("%d is greater no \n", a);
	}
	else if ((b>a)&&(b>c)){
		("%d is greater no \n", b);
	}
	else if ((c>a)&&(c>b)){
		printf("%d is greater no \n", c);
	} 
}
