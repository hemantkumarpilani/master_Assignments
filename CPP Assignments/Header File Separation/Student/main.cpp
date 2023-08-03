#include"student.h"

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
