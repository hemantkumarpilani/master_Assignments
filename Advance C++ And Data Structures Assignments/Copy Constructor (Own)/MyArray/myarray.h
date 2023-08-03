#include<iostream>
using namespace std;
class MyArray{
	int size,index;
	int* p;
	
	public:
		MyArray();   // default constructor
		MyArray(int);  // parameterised constructor
		MyArray(MyArray &); // copy constructor
		void add_element(int);
		void display_all();
		void search_element(int);
		void deletedata(int);
		~MyArray();
};
