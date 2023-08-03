#include<stdio.h>
#include<string.h>
typedef class student {
	int roll_no;
	char name[20];
	
	public:
		
	student(){
		this->roll_no=0;
		strcpy(this->name,"not given");
	}
	
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
	int roll_no;
	char name[20];
	printf("Enter roll no and name \n");
	printf("Enter roll no:\n");
	scanf("%d",&roll_no);
	printf("Enter name:\n");
	scanf("%s",name);
	s1.setname(name);
	s1.setroll_no(roll_no);
	s1.display_student();
	return 0;
}
