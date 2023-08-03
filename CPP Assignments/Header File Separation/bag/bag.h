#include<iostream>
using namespace std;
#include<string.h>
class bag {
	int price;
	char company[10];
	char colour[10];
	
	public:
		
	bag();
	
	bag(int,char*,char*);
	
	void setprice (int);
	
	void setcompany (char*);
	
	void setcolour (char*);
	
	int getprice ();
	
	char* getcompany ();
	
	char* getcolour ();
	
	void display();
};
