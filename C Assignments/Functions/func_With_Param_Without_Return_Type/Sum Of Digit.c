//Sum of digit using while loop 
#include<stdio.h>
void sum(int);
void main (){
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	sum(num);
}
void sum(int num){
	int r,sum=0;
	while (num>0){
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("The sum of digit is = %d \n",sum);
}

