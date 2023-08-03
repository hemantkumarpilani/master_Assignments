//Calculate total salary based on basic 
#include<iostream>
using namespace std;
int main (){
	float basic_salary,total_salary,da,ta,hra;
	cout<<"Enter basic salary\n";
	cin>>basic_salary;
	if (basic_salary<=5000){
		da=10;
		ta=20;
		hra=25;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		cout<<"Total Salary of an employee is "<<total_salary<<endl;
	}
	else {
		da=15;
		ta=25;
		hra=30;
		total_salary= basic_salary+(basic_salary*(da+ta+hra)/100);
		cout<<"Total Salary of an employee is "<<total_salary<<endl;
	}
	return 0;
}
