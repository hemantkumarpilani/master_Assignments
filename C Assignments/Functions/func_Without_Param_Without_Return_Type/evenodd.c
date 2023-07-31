//even/odd using if else
#include<stdio.h>
void even_odd();
void main(){
	even_odd();
}
void even_odd(){
	int number;
	printf("Enter Number \n");
	scanf("%d",&number);
	if (number%2==0){
		printf("even number \n");
	}
	else{
		printf("odd number \n");
	}
}
