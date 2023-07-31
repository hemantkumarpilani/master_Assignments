//factorial using for loop;
#include<stdio.h>
void main (){
	int a,i;
	printf("Enter number \n");
	scanf("%d",&a);
	for (i=a-1;i>0;i--)
	{
		
		a=a*i;
		printf("%d \n",i);
//		printf("%d \n",a);
	}
	printf("Factorial of entered number is = %d \n",a);
}
