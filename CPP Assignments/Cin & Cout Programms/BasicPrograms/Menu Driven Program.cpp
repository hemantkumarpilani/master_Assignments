// Menu Driven Program
#include<iostream>
using namespace std;
int main (){
	int number,basic_salary,total_salary,da,ta,hra,choice;
	printf("Choice-1 is for even odd & Choice-2 is for total salary \n");
	printf("Enter choice \n");
	scanf("%d",&choice);
	if (choice==1){
		cout<<"Enter number\n";
	cin>>number;
	if (number%2==0){
		cout<<"even number\n";
	}
	else{
		cout<<"odd number\n";
	}
	}
	else if (choice==2){
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
	
	}	
	return 0;
}

