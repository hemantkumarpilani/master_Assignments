#include<stdio.h>
typedef struct sales_manager{
	int id;
	char name[20];
	int salary;
	float incentive;
	int target;
	
	void store_sales(){
	printf("Enter name,id,salary,target \n");
	scanf("%s %d %d %d",&name,&id,&salary,&target);
	if (target>=500){
		incentive= ((20*salary)/100);
		}
	else {
		incentive= ((5*salary)/100);
		}
	}
	
	void display_sales(){
	printf("Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",name,id,salary,target,incentive);
	}
	
}mng;
int main (){
	mng m1;
	m1.store_sales();
	m1.display_sales();
	return 0;
}
