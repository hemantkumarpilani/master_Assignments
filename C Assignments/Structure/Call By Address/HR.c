#include<stdio.h>
typedef struct human_resources {
	int id;
	char name[20];
	int salary;
	int commission;
}HR;
void store_HR(HR*);
void display_HR(HR*);
void main (){
	HR h1;
	store_HR(&h1);
	display_HR(&h1);
}
void store_HR(HR* h1){
	printf("Enter name,id,salary \n");
	scanf("%s %d %d",h1->name,&h1->id,&h1->salary);
	h1->commission= ((5*h1->salary)/100);
}
void display_HR(HR* h1){
	printf("HR 's name is %s, id is %d, salary is %d and commission is %d \n",h1->name,h1->id,h1->salary,h1->commission);
}
