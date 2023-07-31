#include<stdio.h>
typedef struct student {
	int roll_no;
	char name[20];
}std;
std store_student(std);
void display_student(std);
void main (){
	std s1;
	s1= store_student(s1);
	display_student(s1);
}
std store_student(std s2){
	printf("Enter roll no and name \n");
	scanf("%d %s",&s2.roll_no,&s2.name);
	return s2;
}
void display_student(std s2){
	printf("name of student s1 is %s and rollno is = %d \n",s2.name,s2.roll_no);
}
