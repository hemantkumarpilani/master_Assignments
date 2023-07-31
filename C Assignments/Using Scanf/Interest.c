//Find out interest in a program
#include<stdio.h>
void main (){
	int principal,rate,time,interest;
	printf("Enter prinicipal \n");
	scanf("%d",&principal);
	printf("Enter rate in percentage \n");
	scanf("%d",&rate);
	printf("Enter time \n");
	scanf("%d",&time);
	interest= (principal*rate*time)/100;
	printf("Interest is = %d",interest);
}
