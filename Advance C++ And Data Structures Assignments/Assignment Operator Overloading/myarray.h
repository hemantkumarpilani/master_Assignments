#include<iostream>
using namespace std;
class MyArray{
	int size,index;
	int* p;
	
	public:
		MyArray();
		MyArray(int);
		MyArray(MyArray &);
		void add_element(int);
		void display_all();
		void search_element(int);
		void deletedata(int);
		void operator= (MyArray &);  // Assignment Operator overloading
};
