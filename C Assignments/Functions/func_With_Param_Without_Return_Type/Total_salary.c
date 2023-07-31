//Calculate total salary based on basic 
#include<stdio.h>
void total_salary(float);
void main (){
	float basic_salary;
	printf("Enter basic salary \n");
	scanf("%f",&basic_salary);
	total_salary(basic_salary);
}
void total_salary(float basic_salary){
	float total_salary,da,ta,hra;
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
