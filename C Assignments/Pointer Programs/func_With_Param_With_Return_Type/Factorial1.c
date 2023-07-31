//factorial using for loop;
#include<stdio.h>
int factorial (int*);
void main (){
	int a,b;
	printf("Enter number \n");
	scanf("%d",&a);
	b= factorial(&a);
	printf("Factorial of entered number is = %d \n",b);
}
int factorial (int* a){
	int i,b;
	b= *a;
	for (i=b-1;i>0;i--)
	{
		
		b=b*i;
	}
	return b;
}
