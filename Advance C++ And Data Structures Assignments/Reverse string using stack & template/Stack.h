#include<iostream>
using namespace std;

template<class T>
class Stack {
	int top,size;
	T *p;
	
	public:
		Stack(int);
		bool isempty();
		bool isfull();
		bool push(T &);
		bool pop (T &);
		bool peak (T &);
		void display();
		~Stack();
};

