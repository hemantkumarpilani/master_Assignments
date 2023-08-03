#include<stdio.h>
#include<string.h>
typedef struct student {
	int roll_no;
	char name[20];
	
	void setroll_no (int roll_no){
		this->roll_no= roll_no;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	int getroll_no (){
		return this->roll_no;
	}
	
	char* getname (){
		return this->name;
	}
	
}stud;
int main (){
	stud s1;
	int roll_no;
	char name[20];
	printf("Enter roll no and name \n");
	printf("Enter roll no:\n");
	scanf("%d",&roll_no);
	printf("Enter name:\n");
	scanf("%s",name);
	s1.setname(name);
	s1.setroll_no(roll_no);
	printf("Name of student is %s and rollno is = %d \n",s1.getname(),s1.getroll_no());
	return 0;
}
