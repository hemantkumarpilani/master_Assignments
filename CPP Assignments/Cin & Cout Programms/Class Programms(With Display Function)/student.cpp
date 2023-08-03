#include<iostream>
using namespace std;
#include<string.h>
class student {
	int roll_no;
	char name[20];
	
	public:
		
	student(){
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
	
	void display(){
	cout<<"\nName of student : "<<this->name;
	cout<<"\nRoll no : "<<this->roll_no;
	cout<<"\n\n";
	}
	
};
int main (){
	student s1,s2(13,"Hemant");
	
	int roll_no;
	char name[20];
	
	cout<<"Enter roll no and name\n";
	cout<<"Enter roll no:\n";
	cin>>roll_no;
	cout<<"Enter name:\n";
	cin>>name;
	
	s1.setname(name);
	s1.setroll_no(roll_no);
	
	s1.display();
	s2.display();
	return 0;
}
