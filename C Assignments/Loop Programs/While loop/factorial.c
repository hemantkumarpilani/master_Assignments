//Factorial of number
#include<stdio.h>
void main (){
	int num,fact=1;
	printf("Enter number \n");
	scanf("%d",&num);
	while (num>0){;
		fact=fact*num;
		num=num-1;
	}
	printf("The factorial is = %d \n",fact);
}
