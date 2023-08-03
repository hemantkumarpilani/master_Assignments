#include<stdio.h>
typedef struct employee{
	int id;
	int salary;
	char name[20];
	
	void store_employee(){
	printf("Enter employee 's id, name and salary \n");
	scanf("%d %s %d",&id,&name,&salary);
}
void display_employee(){
	printf("Employee e1 's name is %s, id is %d and salary is %d \n",name,id,salary);
}	
}emp;
int main (){
	emp e1;
	e1.store_employee();
	e1.display_employee();
	return 0;
}

