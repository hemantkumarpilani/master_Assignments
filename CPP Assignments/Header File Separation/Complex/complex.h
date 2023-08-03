#include<iostream>
using namespace std;
class complex{
	int r;
	int img;
	
	public:
		
	complex();
	
	complex(int,int);
	
	void setreal (int);
	
	void setimaginary (int);
	
	int getreal ();
	
	int getimaginary ();
	
	void display();
	
};

