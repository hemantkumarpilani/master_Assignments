#include<iostream>
using namespace std;
#include<string.h>
class HR {
	int id;
	char name[20];
	double salary;
	double commission;
	
	public:
	
	HR();
	
	HR(int,char*,double,double);
	
	void setid (int);
	
	void setname (char*);
	
	void setsalary (double);
	
	void setcommission (double);
	
	
	double getid ();
	
	char* getname ();
	
	double getsalary ();
	
	double getcommission ();
	
	void calculate_commission();
	
	void display();
	
};
