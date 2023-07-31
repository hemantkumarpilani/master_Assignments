#include<stdio.h>
int factorial();
void main (){
	int num,ans;
	printf("Enter number\n");
	scanf("%d",&num);
	ans= factorial(num);
	printf("Factorial of %d is %d",num,ans);
}
int factorial(int num){
	if (num==1){
		return 1;
	}
	else {
		return num*factorial(num-1);
	}
	
}
