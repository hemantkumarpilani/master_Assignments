#include<stdio.h>
typedef struct admin {
	int id;
	char name[20];
	int salary;
	int allowance;
	
	void store_admin(){
	printf("Enter name,id,salary \n");
	scanf("%s %d %d",&name,&id,&salary);
	allowance= ((5*salary)/100);
	}
	
	void display_admin(){
	printf("Admin 's name is %s, id is %d, salary is %d and allowance is %d \n",name,id,salary,allowance);
	}
}adm;
int main (){
	adm a1;
	a1.store_admin();
	a1.display_admin();
	return 0;
}
