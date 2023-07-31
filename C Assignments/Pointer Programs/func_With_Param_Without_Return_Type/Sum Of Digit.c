//Sum of digit using while loop 
#include<stdio.h>
void sum(int*);
void main (){
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	sum(&num);
}
void sum(int* num){
	int a,r,sum=0;
	a= *num;
	while (a>0){
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
	printf("The sum of digit is = %d \n",sum);
}

