//Factorial using while loop 
#include<stdio.h>
void factorial(int*);
void main (){
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	factorial(&num);
}
void factorial(int* num){
	int a,fact=1;
	a= *num;
	while (a>0){
		fact=fact*a;
		a=a-1;
	}
	printf("The factorial is = %d \n",fact);
}
