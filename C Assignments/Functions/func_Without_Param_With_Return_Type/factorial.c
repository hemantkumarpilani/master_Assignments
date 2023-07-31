//Factorial of number
#include<stdio.h>
int factorial();
void main (){
	int a;
	a=factorial();
	printf("The factorial is = %d \n",a);
}
int factorial(){
	int num,fact=1;
	printf("Enter number \n");
	scanf("%d",&num);
	while (num>0){;
		fact=fact*num;
		num=num-1;
	}
	return fact;
}
