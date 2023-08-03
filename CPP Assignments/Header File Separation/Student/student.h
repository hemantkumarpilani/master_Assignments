#include<iostream>
using namespace std;
#include<string.h>
class student {
	int roll_no;
	char name[20];
	
	public:
		
	student();
	
	student(int,char*);
	
	void setroll_no (int);
	
	void setname (char*);
	
	int getroll_no ();
	
	char* getname ();
	
	void display();
	
};
