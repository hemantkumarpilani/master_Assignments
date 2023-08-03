#include<iostream>
using namespace std;

namespace USA {
	class time {
	int hr,min,sec;
		
	public:
			
		time();   // function declaration
		time(int,int,int);   // function declaration
		void display();  // function declaration
		time (time &);  //copy constructor;
	};	
}
