//Find out interest in a program
#include<stdio.h>
int interest ();
void main (){
	int a;
	a=interest();
	printf("Interest is = %d",a);
}
int interest (){
	int principal,rate,time,interest;
	printf("Enter prinicipal \n");
	scanf("%d",&principal);
	printf("Enter rate in percentage \n");
	scanf("%d",&rate);
	printf("Enter time \n");
	scanf("%d",&time);
	interest= (principal*rate*time)/100;
	return interest;
}
