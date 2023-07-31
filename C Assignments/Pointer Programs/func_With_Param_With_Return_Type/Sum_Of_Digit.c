//Sum of digit using for loop
#include<stdio.h>
int sum (int*);
void main (){
	int number,b;
	printf("Enter number \n");
	scanf("%d",&number);
	b= sum(&number);
	printf("Sum of digits of entered number = %d \n",b);
}
int sum (int* number){
	int n=0,r,a,b,i,sum=0;
	b= *number;
	a=b;
	while (a>0){	
		a=a/10;
		n=n+1;	
	}
	for (i=0;i<n;i++){
		r=b%10;
		sum=sum+r;
		b=b/10;
	}
	return sum;
}
