// Menu Driven Program
#include<stdio.h>
void even_odd(int*);
void basic_salary(int*);
void main (){
	int choice;
	printf("Choice-1 is for even odd & Choice-2 is for basic salary \n");
	printf("Enter choice \n");
	scanf("%d",&choice);
	if (choice==1){
		int number;
		printf("Enter Number \n");
		scanf("%d",&number);
		even_odd(&number);
	}
	else if (choice==2){
		int a;
		printf("Enter basic salary \n");
		scanf("%d",&a);
		basic_salary(&a);
	}
}
void even_odd(int* number){
	int no;
	no= *number;
	if (no%2==0){
			printf("%d number is an even number \n",no);
		}
		else {
			printf("%d number is an odd number \n",no);
		}
}
void basic_salary(int* a){
	int total_salary,da,ta,hra,b;
	b= *a;
	if (b<=5000){
		da=10;
		ta=20;
		hra=25;
		total_salary= b+(b*(da+ta+hra)/100);
		printf("Total Salary of an employee is = %d \n",total_salary);
	}
	else {
		da=15;
		ta=25;
		hra=30;
		total_salary= b+(b*(da+ta+hra)/100);
		printf("Total Salary of an employee is = %d \n",total_salary);
	}
}

