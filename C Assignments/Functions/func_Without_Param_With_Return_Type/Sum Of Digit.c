//Sum of digit using while loop 
#include<stdio.h>
int sum();
void main (){
	int a;
	a=sum();
	printf("The sum of digit is = %d \n",a);
}
int sum(){
	int num,r,sum=0;
	printf("Enter number \n");
	scanf("%d",&num);
	while (num>0){
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	return sum;
}

