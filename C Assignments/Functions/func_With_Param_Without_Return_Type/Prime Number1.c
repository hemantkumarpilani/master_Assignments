//Prime Number using for loop
#include<stdio.h>
void prime_number(int);
void main (){
	int num;
	printf("Enter Number \n");
	scanf("%d",&num);
	prime_number(num);
}
void prime_number(int num){
	int i,a,flag=0;
	for (i=2;i<=num/2;i++){
		a=num%i;
		if (a==0){
			flag=1;
			break;
		}
	}
	if (flag==0){
		printf("%d is a prime number \n",num);
	}
	else {
		printf("%d is not a prime number \n",num);
	}
}
