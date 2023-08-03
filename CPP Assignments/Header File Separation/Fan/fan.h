#include<iostream>
using namespace std;
#include<string.h>
class fan {
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	
	public:
		
	fan();
	
	fan(int,char*,int,int);
	
	void setno_of_blades (int);
	
	void setname (char*);
	
	void setprice (int);
	
	void setrpm (int);
	
	int getno_of_blades ();
	
	char* getname ();
	
	int getprice ();
	
	int getrpm ();
	
	void display();
};
