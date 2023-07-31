// Menu Driven Program
#include<stdio.h>
void even_odd();
void basic_salary();
void main (){
	int choice;
	printf("Choice-1 is for even odd & Choice-2 is for basic salary \n");
	printf("Enter choice \n");
	scanf("%d",&choice);
	if (choice==1){
		even_odd();
	}
	else if (choice==2){
		basic_salary();
	}	
}
void even_odd(){
	int number;
	printf("Enter Number \n");
	scanf("%d",&number);
	if (number%2==0){
			printf ("%d is an even number \n",number);
		}
		else {
			printf("%d is an odd number \n",number);
		}
}
void basic_salary(){
	int basic_salary,total_salary,da,ta,hra;
	printf("Enter basic salary \n");
	scanf("%d",&basic_salary);
	if (basic_salary<=5000){
		da=10;
		ta=20;
		hra=25;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		printf("Total Salary of an employee is = %d \n",total_salary);
	}
	else {
		da=15;
		ta=25;
		hra=30;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		printf("Total Salary of an employee is = %d \n",total_salary);
	}
}

