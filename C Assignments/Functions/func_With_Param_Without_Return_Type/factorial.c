//Factorial using while loop 
#include<stdio.h>
void factorial(int);
void main (){
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	factorial(num);
}
void factorial(int num){
	int fact=1;
	while (num>0){
		fact=fact*num;
		num=num-1;
	}
	printf("The factorial is = %d \n",fact);
}
