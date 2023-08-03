#include<stdio.h>
typedef struct student {
	int roll_no;
	char name[20];
	
	void store_student(){
	printf("Enter roll no and name \n");
	scanf("%d %s",&roll_no,&name);
	}
	
	void display_student(){
	printf("Name of student s1 is %s and rollno is = %d \n",name,roll_no);
	}
}stud;
int main (){
	stud s1;
	s1.store_student();
	s1.display_student();
	return 0;
}
