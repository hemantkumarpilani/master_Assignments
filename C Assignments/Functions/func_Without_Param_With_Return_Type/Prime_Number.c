//Prime Number using for loop
#include<stdio.h>
int prime_number();
void main (){
	int a;
	a=prime_number();
	if (a==0){
		printf("Entered number is a prime number \n");
	}
	else {
		printf("Entered number is not a prime number \n");
	}
}
int prime_number(){
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
	return flag;
}
