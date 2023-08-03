#include<iostream>
using namespace std;
typedef class distance{
	double feet;
	double inch;
	
	public:
		
	distance();
	
	distance(double,double);
	
	void setfeet (float);
	
	void setinch (float);
	
	float getfeet ();
	
	float getinch ();
	
	void calculate_inch();
	
	void display();
	
}dist;
