//even/odd using if else
#include<stdio.h>
int even_odd();
void main(){
	int a;
	a= even_odd();
	if (a==0){
		printf("Entered Number is even number");
	}
	else{
		printf("Entered Number is odd number");
	}
}
int even_odd(){
	int number,a;
	printf("Enter Number \n");
	scanf("%d",&number);
	a=number%2;
	return a;
}
