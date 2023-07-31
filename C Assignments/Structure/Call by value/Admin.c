#include<stdio.h>
typedef struct admin {
	int id;
	char name[20];
	int salary;
	int allowance;
}adm;
adm store_admin(adm);
void display_admin(adm);
void main (){
	adm a1;
	a1= store_admin(a1);
	display_admin(a1);
}
adm store_admin(adm a1){
	printf("Enter name,id,salary \n");
	scanf("%s %d %d",a1.name,&a1.id,&a1.salary);
	a1.allowance= ((5*a1.salary)/100);
	return a1;
}
void display_admin(adm a1){
	printf("Admin 's name is %s, id is %d, salary is %d and allowance is %d \n",a1.name,a1.id,a1.salary,a1.allowance);
}
