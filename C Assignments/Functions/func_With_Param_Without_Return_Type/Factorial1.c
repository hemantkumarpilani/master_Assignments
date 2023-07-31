//factorial using for loop;
#include<stdio.h>
void factorial (int);
void main (){
	int a;
	printf("Enter number \n");
	scanf("%d",&a);
	factorial(a);
}
void factorial (int a){
	int i;
	for (i=a-1;i>0;i--)
	{
		
		a=a*i;
	}
	printf("Factorial of entered number is = %d \n",a);
}
