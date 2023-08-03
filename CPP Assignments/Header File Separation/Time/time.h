#include<iostream>
using namespace std;
class time{
	int hour;
	int minute;
	int second;
	
	public:
		
	time ();
	
	time(int,int,int);
	
	void sethour (int);
	
	void setminute (int);
	
	void setsecond (int);
	
	int gethour ();
	
	int getminute ();
	
	int getsecond ();
	
	void display();
	
};
