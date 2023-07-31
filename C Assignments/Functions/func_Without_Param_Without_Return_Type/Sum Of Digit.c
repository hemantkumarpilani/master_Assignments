//Sum of digit using while loop 
#include<stdio.h>
void sum();
void main (){
	sum();
}
void sum(){
	int num,r,sum=0;
	printf("Enter number \n");
	scanf("%d",&num);
	while (num>0){
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("The sum of digit is = %d \n",sum);
}

