#include<stdio.h>
typedef struct sales_manager{
	int id;
	char name[20];
	int salary;
	float incentive;
	int target;
}mng;
mng store_sales(mng);
void display_sales(mng);
void main (){
	mng m1;
	m1= store_sales(m1);
	display_sales(m1);
}
mng store_sales(mng m1){
	printf("Enter name,id,salary,target \n");
	scanf("%s %d %d %d",&m1.name,&m1.id,&m1.salary,&m1.target);
	if (m1.target>=500){
		m1.incentive= ((20*m1.salary)/100);
	}
	else {
		m1.incentive= ((5*m1.salary)/100);
	}
	return m1;
}
void display_sales(mng m1){
	printf("Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",m1.name,m1.id,m1.salary,m1.target,m1.incentive);
}
