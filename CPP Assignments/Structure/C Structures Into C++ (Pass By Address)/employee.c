#include<stdio.h>
typedef struct employee{
	int id;
	int salary;
	char name[20];
}emp;
void store_employee(emp*);
void display_employee(emp*);
void main (){
	emp e1;
	store_employee(&e1);
	display_employee(&e1);
}
void store_employee(emp* e1){
	printf("Enter employee 's id, name and salary \n");
	scanf("%d %s %d",&e1->id,&e1->name,&e1->salary);
}
void display_employee(emp* e1){
	printf("Employee e1 's name is %s, id is %d and salary is %d \n",e1->name,e1->id,e1->salary);
}
