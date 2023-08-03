#include"student.h"

	student::student(){
		this->roll_no=0;
		strcpy(this->name,"not given");
	}
	
	student::student(int roll_no, char* nm){
		this->roll_no= roll_no;
		strcpy(this->name, nm);
	}
	
	void student:: setroll_no (int roll_no){
		this->roll_no= roll_no;
	}
	
	void student:: setname (char* name){
		strcpy(this->name,name);
	}
	
	int student:: getroll_no (){
		return this->roll_no;
	}
	
	char* student:: getname (){
		return this->name;
	}
	
	void student:: display(){
	cout<<"\nName of student : "<<this->name;
	cout<<"\nRoll no : "<<this->roll_no;
	cout<<"\n\n";
	}
