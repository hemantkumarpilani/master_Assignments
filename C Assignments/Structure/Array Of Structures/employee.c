#include<stdio.h>
typedef struct employee{
	int id;
	int salary;
	char name[20];
}emp;
void store_employee(emp*,int);
void display_employee(emp*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	emp e[n];
	store_employee(e,n);
	display_employee(e,n);
}
void store_employee(emp* e, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter employee 's id, name and salary \n");
		scanf("%d %s %d",&e[i].id,&e[i].name,&e[i].salary);	
	}
}
void display_employee(emp* e, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Employee e1 's name is %s, id is %d and salary is %d \n",e[i].name,e[i].id,e[i].salary);	
	}
}
