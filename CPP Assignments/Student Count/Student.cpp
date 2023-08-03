#include<stdio.h>
#include<string.h>
class student {
	int roll_no;
	char name[20];
	static int count;
	
	public:
		
	student(){
		count++;
		this->roll_no=0;
		strcpy(this->name,"not given");
	}
	
	student(int roll_no, char* nm){
		this->roll_no= roll_no;
		strcpy(this->name, nm);
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
	
	static int getcount(){
		return count;	
	}	
	
	void display_student(){
	printf("Name of student is %s and rollno is = %d \n",name,roll_no);
	}
	
};
int student :: count=0;
void student_count();
int main (){
	student s1,s2;
	int roll_no;
	char name[20];
	
	student_count();
	printf("Total no of students is %d\n",student :: getcount());
	return 0;
}
void student_count(){
	student s3,s4;
}
