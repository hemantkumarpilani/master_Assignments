//factorial using for loop;
#include<stdio.h>
void factorial ();
void main (){
	factorial();
}
void factorial (){
	int a,i;
	printf("Enter number \n");
	scanf("%d",&a);
	for (i=a-1;i>0;i--)
	{
		
		a=a*i;
	}
	printf("Factorial of entered number is = %d \n",a);
}
