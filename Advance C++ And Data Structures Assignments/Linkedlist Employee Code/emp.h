#include<iostream>
#include<string.h>
using namespace std;

class emp {
	int eid;
	char ename[20];
	double basic;
	public:
		emp();
		emp(int,char*,double);
		void setid(int);
		void setname(char*);
		void setbasic(double);
		int getid();
		char* getname();
		double getbasic();
		void display();
};

