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
	
	void display_student(){
	printf("Name of student is %s and rollno is = %d \n",name,roll_no);
	}
	
}stud;
int main (){
	stud s1;
	s1.setname("Hemant");
	s1.setroll_no(13);
	s1.display_student();
	return 0;
}
