//Factorial of number
#include<stdio.h>
int factorial(int);
int main (){
	int num,fact;
	printf("Enter number \n");
	scanf("%d",&num);
	fact= factorial(num);
	printf("The factorial is = %d \n",fact);
}
int factorial(int num){
	int fact=1;
	while (num>0){
		fact=fact*num;
		num=num-1;
	}
	return fact;
}
