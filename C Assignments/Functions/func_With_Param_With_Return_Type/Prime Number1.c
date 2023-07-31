//Prime Number using for loop
#include<stdio.h>
int prime_number(int);
void main (){
	int num,flag;
	printf("Enter Number \n");
	scanf("%d",&num);
	flag= prime_number(num);
	if (flag==0){
		printf("%d is a prime number \n",num);
	}
	else {
		printf("%d is not a prime number \n",num);
	}
}
int prime_number(int num){
	int i,a,flag=0;
	for (i=2;i<=num/2;i++){
		a=num%i;
		if (a==0){
			flag=1;
			break;
		}
	}
	return flag;
}
