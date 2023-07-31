//even/odd using if else
#include<stdio.h>
void even_odd(int*);
void main(){
	int number;
	printf("Enter Number \n");
	scanf("%d",&number);
	even_odd(&number);
}
void even_odd(int* number){
	int a;
	a= *number;
	if (a%2==0){
		printf("even number \n");
	}
	else{
		printf("odd number \n");
	}
}
