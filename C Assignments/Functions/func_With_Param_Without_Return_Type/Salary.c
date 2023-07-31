//Increment Salary of employees
#include<stdio.h>
void salary1(int);
void main(){
	int salary;
	printf("Enter salary \n");
	scanf("%d",&salary);
	salary1(salary);
}
void salary1(int salary){
	if (salary>10000){
		salary= salary+((salary*40)/100);
		printf("The new salary is %d ",salary);
	}
	else if ((salary<10000)&&(salary>7000)){
		salary= salary+((salary*50)/100);
		printf("The New Salary is %d",salary);
	}
	else {
		salary= salary+((salary*70)/100);
		printf("The new salary is %d",salary);
	}
}
