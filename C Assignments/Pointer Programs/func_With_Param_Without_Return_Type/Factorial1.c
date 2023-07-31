//factorial using for loop;
#include<stdio.h>
void factorial (int*);
void main (){
	int a;
	printf("Enter number \n");
	scanf("%d",&a);
	factorial(&a);
}
void factorial (int* a){
	int i,b;
	b= *a;
	for (i=b-1;i>0;i--)
	{
		
		b=b*i;
	}
	printf("Factorial of entered number is = %d \n",b);
}
