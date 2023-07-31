//Sum of digit using for loop
#include<stdio.h>
void sum ();
void main (){
	sum();
}
void sum (){
	int number,n=0,r,a,i,sum=0;
	printf("Enter number \n");
	scanf("%d",&number);
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
	printf("Sum of digits of entered number = %d \n",sum);
}
