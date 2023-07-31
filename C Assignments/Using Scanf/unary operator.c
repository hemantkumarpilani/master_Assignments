//unary operators
#include<stdio.h>
void main(){
	int a;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	int b;
	b= a++;
	printf("The value of b after postincrement is %d \n", b);
	b=++a;
	printf("The value of b after preincrement is %d \n", b);
	b= a--;
	printf("The value of b after postdecrement is %d \n", b);
	b= --a;
	printf("The value of b after predecrement is %d \n", b);
}
