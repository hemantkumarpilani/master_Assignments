//even/odd using if else
#include<stdio.h>
int even_odd(int*);
void main(){
	int number,a;
	printf("Enter Number \n");
	scanf("%d",&number);
	a= even_odd(&number);
	if (a==0){
		printf("even number \n");
	}
	else{
		printf("odd number \n");
	}
}
int even_odd(int* number){
	int a;
	a= *number/2;
	return a;
	
}
