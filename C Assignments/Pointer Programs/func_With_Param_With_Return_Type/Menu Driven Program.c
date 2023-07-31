// Menu Driven Program
#include<stdio.h>
int even_odd(int*);
int basic_salary(int*);
void main (){
	int choice;
	printf("Choice-1 is for even odd & Choice-2 is for basic salary \n");
	printf("Enter choice \n");
	scanf("%d",&choice);
	if (choice==1){
		int number,no;
		printf("Enter Number \n");
		scanf("%d",&number);
		no= even_odd(&number);
		if (no==0){
			printf("%d is an even number \n",number);
		}
		else {
			printf("%d is an odd number \n",number);
		}
	}
	else if (choice==2){
		int a,b;
		printf("Enter basic salary \n");
		scanf("%d",&a);
		b= basic_salary(&a);
		printf("Total Salary of an employee is = %d \n",b);
	}
}
int even_odd(int* number){
	int no;
	no= *number%2;
	return no;
}
int basic_salary(int* a){
	int total_salary,da,ta,hra,b;
	b= *a;
	if (b<=5000){
		da=10;
		ta=20;
		hra=25;
		total_salary= b+(b*(da+ta+hra)/100);
		return total_salary;
	}
	else {
		da=15;
		ta=25;
		hra=30;
		total_salary= b+(b*(da+ta+hra)/100);
		return total_salary;
	}
}

