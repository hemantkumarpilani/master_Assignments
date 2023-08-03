#include<iostream>
using namespace std;
class date{
	int day;
	int month;
	int year;
	
	public:
		
	date ();
	
	date(int,int,int);
	
	void setday (int);
	
	void setmonth (int);
	
	void setyear (int);
	
	int getday ();
	
	int getmonth ();
	
	int getyear ();
	
	void display();
	
};
