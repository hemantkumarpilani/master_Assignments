//Calculate total salary based on basic 
#include<stdio.h>
int total_salary();
void main (){
	float a;
	a=total_salary();
	printf("Total Salary of an employee is = %f \n",a);
}
int total_salary(){
	float basic_salary,total_salary,da,ta,hra;
	printf("Enter basic salary \n");
	scanf("%f",&basic_salary);
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
