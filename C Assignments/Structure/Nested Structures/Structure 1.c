#include<stdio.h>
#include<string.h>
typedef struct Date_Of_Joining {
	int day;
	int month;
	int year;
}doj;
typedef struct Date_Of_Birth {
	int day;
	int month;
	int year;
}dob;
typedef struct employee {
	int id;
	char name[20];
	int salary;
	doj d1;
	dob d2;
}emp;
void main (){
	emp e1,e2;
	e1.id= 56;
	strcpy(e1.name, "Hemant");
	e1.salary= 50000;
	e1.d2.day= 16;
	e1.d2.month= 7;
	e1.d2.year= 1998;
	e1.d1.day= 5;
	e1.d1.month= 7;
	e1.d1.year= 2022;
	printf("Employee e1 id :-	%d \n",e1.id);
	printf("Employee e1 name :-	%s \n",e1.name);
	printf("Employee e1 salary :-	%d \n",e1.salary);
	printf("Employee e1 date of birth :-	%d:%d:%d \n",e1.d2.day, e1.d2.month, e1.d2.year);
	printf("Employee e1 date of joining :-	%d:%d:%d \n",e1.d1.day, e1.d1.month, e1.d1.year);
	printf("Enter employee e2 information \n");
	printf("Enter employee s id \n");
	scanf("%d",&e2.id);
	printf("Enter employee s name \n");
	scanf("%s",&e2.name);
	printf("Enter employee s salary \n");
	scanf("%d",&e2.salary);
	printf("Enter employee s date of birth \n");
	scanf("%d %d %d",&e2.d2.day,&e2.d2.month,&e2.d2.year);
	printf("Enter employee s date of joining \n");
	scanf("%d %d %d",&e2.d1.day,&e2.d1.month,&e2.d1.year);
	printf ("Employee e2 's information :- \n");
	printf("Employee e2 id :-	%d \n",e2.id);
	printf("Employee e2 name :-	%s \n",e2.name);
	printf("Employee e2 salary :-	%d \n",e2.salary);
	printf("Employee e2 date of birth :-	%d:%d:%d \n",e2.d2.day, e2.d2.month, e2.d2.year);
	printf("Employee e1 date of joining :-	%d:%d:%d \n",e2.d1.day, e2.d1.month, e2.d1.year);
	
}

