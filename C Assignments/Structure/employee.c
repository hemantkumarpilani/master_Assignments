#include<stdio.h>
struct employee {
	int id;
	char name[20];
	int salary;
};
void main (){
	struct employee e1,e2;
	printf("employee e1 information:- \n");
	printf("Enter employee 's id, name and salary \n");
	scanf("%d %s %d",&e1.id,&e1.name,&e1.salary);
	printf("\nName of employee e1 is %s has id no %d and salary is %d \n \n",e1.name,e1.id,e1.salary);
	printf("employee e2 information:- \n");
	printf("Enter employee 's id, name and salary \n");
	scanf("%d %s %d",&e2.id,&e2.name,&e2.salary);
	printf("\nName of employee e2 is %s has id no %d and salary is %d \n",e2.name,e2.id,e2.salary);
}
