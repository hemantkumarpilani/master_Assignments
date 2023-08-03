#include<iostream>
using namespace std;
#include<string.h>
class admin {
	int id;
	char name[20];
	double salary;
	double allowance;
	
	public:
		
	admin();
	
	admin(int,char*,double,double);
	
	void setid (int);
	
	void setname (char*);
	
	void setsalary (double);
	
	void setallowance (double);
	
	int getid ();
	
	char* getname ();
	
	double getsalary ();
	
	double getallowance ();
	
	void calculate_allowance();
	
	void display();
	
};
