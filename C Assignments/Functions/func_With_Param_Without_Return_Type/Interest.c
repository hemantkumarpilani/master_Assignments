//Find out interest in a program
#include<stdio.h>
void interest (int,int,int);
void main (){
	int principal,rate,time;
	printf("Enter prinicipal \n");
	scanf("%d",&principal);
	printf("Enter rate in percentage \n");
	scanf("%d",&rate);
	printf("Enter time \n");
	scanf("%d",&time);
	interest(principal,rate,time);
}
void interest (int principal, int rate, int time){
	int interest;
	interest= (principal*rate*time)/100;
	printf("Interest is = %d",interest);
}
