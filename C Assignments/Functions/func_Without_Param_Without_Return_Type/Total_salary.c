//Calculate total salary based on basic 
#include<stdio.h>
void total_salary();
void main (){
	total_salary();
}
void total_salary(){
	float basic_salary,total_salary,da,ta,hra;
	printf("Enter basic salary \n");
	scanf("%f",&basic_salary);
	if (basic_salary<=5000){
		da=10;
		ta=20;
		hra=25;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		printf("Total Salary of an employee is = %f \n",total_salary);
	}
	else {
		da=15;
		ta=25;
		hra=30;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		printf("Total Salary of an employee is = %f \n",total_salary);
	}
}
