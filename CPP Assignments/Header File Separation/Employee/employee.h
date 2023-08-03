#include<iostream>
using namespace std;
#include<string.h>
class employee{
	int id;
	double salary;
	char name[20];
	
	public:
		
	employee();
	
	employee(int,char*,double);
	
	void setid (int);
	
	void setsalary (double);
	
	void setname (char*);
	
	int getid ();
	
	double getsalary ();
	
	char* getname ();
	
	void display();
	
};
