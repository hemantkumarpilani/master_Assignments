//Prime Number using for loop
#include<stdio.h>
void prime_number();
void main (){
	prime_number();
}
void prime_number(){
	int num,i,a,flag=0;
	printf("Enter Number \n");
	scanf("%d",&num);
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
