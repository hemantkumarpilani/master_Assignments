//Sum of digit using while loop 
#include<stdio.h>
int sum(int*);
void main (){
	int num,b;
	printf("Enter number \n");
	scanf("%d",&num);
	b= sum(&num);
	printf("The sum of digit is = %d \n",b);
}
int sum(int* num){
	int a,r,sum=0;
	a= *num;
	while (a>0){
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
	return sum;
}

