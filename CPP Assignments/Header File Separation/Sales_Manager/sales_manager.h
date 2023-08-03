#include<iostream>
using namespace std;
#include<string.h>
class sales_manager{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	
	public:
		
	sales_manager();
	
	sales_manager(int,char*,double,int,double);
	
	void setid (int);
	
	void setname (char*);
	
	void setsalary (double);
	
	void settarget (int);
	
	void setincentive (double);
	
	int getid ();
	
	char* getname ();
	
	double getsalary ();
	
	int gettarget ();
	
	double getincentive ();
	
	void calculate_incentive();
	
	void display();
	
};
