#include<iostream>
using namespace std;

class Stack {
	int top,size;
	int *p;
	
	public:
		Stack(int);
		bool isempty();
		bool isfull();
		bool push(int &);
		bool pop(int &);
		bool peak(int &);
		void display();
		~Stack();
};
