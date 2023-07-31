//Sum of digit using while loop 
#include<stdio.h>
int sum(int);
void main (){
	int num,a;
	printf("Enter number \n");
	scanf("%d",&num);
	a= sum(num);
	printf("The sum of digit is = %d \n",a);
}
int sum(int num){
	int r,sum=0;
	while (num>0){
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	return sum;
}

