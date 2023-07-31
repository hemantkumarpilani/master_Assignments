//factorial using for loop;
#include<stdio.h>
int factorial ();
void main (){
	int a;
	a=factorial();
	printf("Factorial of entered number is = %d \n",a);
}
int factorial (){
	int a,i;
	printf("Enter number \n");
	scanf("%d",&a);
	for (i=a-1;i>0;i--)
	{
		
		a=a*i;
	}
	return a;
}
