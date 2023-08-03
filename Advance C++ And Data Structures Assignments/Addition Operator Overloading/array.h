#include<iostream>
using namespace std;

class array{
	int size;
	int index;
	int* p;
	
	public:
		array();
		array(int);
		void add_element(int);
		array operator+(array);
		void display();
};
