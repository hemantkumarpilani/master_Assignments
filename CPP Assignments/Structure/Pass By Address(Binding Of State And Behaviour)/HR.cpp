#include<stdio.h>
typedef struct human_resources {
	int id;
	char name[20];
	int salary;
	int commission;
	
	void store_HR(){
	printf("Enter name,id,salary \n");
	scanf("%s %d %d",&name,&id,&salary);
	commission= ((5*salary)/100);
	}
	
	void display_HR(){
	printf("HR 's name is %s, id is %d, salary is %d and commission is %d \n",name,id,salary,commission);
	}
}HR;
int main (){
	HR h1;
	h1.store_HR();
	h1.display_HR();
	return 0;
}
