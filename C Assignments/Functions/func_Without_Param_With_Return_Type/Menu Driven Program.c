// Menu Driven Program
#include<stdio.h>
int even_odd();
int basic_salary();
void main (){
	int choice,a,b;
	printf("Choice-1 is for even odd & Choice-2 is for basic salary \n");
	printf("Enter choice \n");
	scanf("%d",&choice);
	if (choice==1){
		a= even_odd();
		if (a==0){
			printf("Entered number is an even number \n");
		}
		else {
			printf("Entered number is an odd number \n");
		}
	}
	else if (choice==2){
		b= basic_salary();
		printf("Total Salary of an employee is = %d \n",b);
	}
}
int even_odd(){
	int number,a;
	printf("Enter Number \n");
	scanf("%d",&number);
	a= number%2;
	return a;
}
int basic_salary(){
	int basic_salary,total_salary,da,ta,hra;
	printf("Enter basic salary \n");
	scanf("%d",&basic_salary);
	if (basic_salary<=5000){
		da=10;
		ta=20;
		hra=25;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		return total_salary;
	}
	else {
		da=15;
		ta=25;
		hra=30;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		return total_salary;
	}
}

