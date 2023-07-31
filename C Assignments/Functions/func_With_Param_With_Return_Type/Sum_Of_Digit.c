//Sum of digit using for loop
#include<stdio.h>
int sum (int);
void main (){
	int number,a;
	printf("Enter number \n");
	scanf("%d",&number);
	a= sum(number);
	printf("Sum of digits of entered number = %d \n",a);
}
int sum (int number){
	int n=0,r,a,i,sum=0;
	a=number;
	while (a>0){	
		a=a/10;
		n=n+1;	
	}
	for (i=0;i<n;i++){
		r=number%10;
		sum=sum+r;
		number=number/10;
	}
	return sum;
}
