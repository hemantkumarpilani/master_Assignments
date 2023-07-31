//Factorial using while loop 
#include<stdio.h>
int factorial(int*);
void main (){
	int num,b;
	printf("Enter number \n");
	scanf("%d",&num);
	b= factorial(&num);
	printf("The factorial is = %d \n",b);
}
int factorial(int* num){
	int a,fact=1;
	a= *num;
	while (a>0){
		fact=fact*a;
		a=a-1;
	}
	return fact;
}
