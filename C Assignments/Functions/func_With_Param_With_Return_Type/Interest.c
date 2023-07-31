//Find out interest in a program
#include<stdio.h>
int interest (int,int,int);
void main (){
	int principal,rate,time,interest1;
	printf("Enter prinicipal \n");
	scanf("%d",&principal);
	printf("Enter rate in percentage \n");
	scanf("%d",&rate);
	printf("Enter time \n");
	scanf("%d",&time);
	interest1= interest(principal,rate,time);
	printf("Interest is = %d",interest1);
}
int interest (int principal, int rate, int time){
	int interest;
	interest= (principal*rate*time)/100;
	return interest;
}
