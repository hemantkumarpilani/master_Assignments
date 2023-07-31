//Increment Salary of employees
#include<stdio.h>
int salary();
void main(){
	int a;
	a=salary();
	printf("The new salary is %d ",a);
}
int salary(){
	int salary;
	printf("Enter salary \n");
	scanf("%d",&salary);
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
