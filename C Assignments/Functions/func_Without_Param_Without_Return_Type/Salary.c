//Increment Salary of employees
#include<stdio.h>
void salary();
void main(){
	salary();
}
void salary(){
	int salary;
	printf("Enter salary \n");
	scanf("%d",&salary);
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
