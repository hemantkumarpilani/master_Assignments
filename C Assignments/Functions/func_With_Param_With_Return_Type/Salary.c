//Increment Salary of employees
#include<stdio.h>
int salary1(int);
void main(){
	int salary,a;
	printf("Enter salary \n");
	scanf("%d",&salary);
	a= salary1(salary);
	printf("The new salary is %d ",a);
}
int salary1(int salary){
	if (salary>10000){
		salary= salary+((salary*40)/100);
		return salary;
	}
	else if ((salary<10000)&&(salary>7000)){
		salary= salary+((salary*50)/100);
		return salary;
	}
	else {
		salary= salary+((salary*70)/100);
		return salary;
	}
}
