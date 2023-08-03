#include<iostream>
using namespace std;

class Queue{
	int front,rear,size;
	int* q;
	
	public:
		Queue(int);
		~Queue();
		bool isempty();
		bool isfull();
		bool insert(int &);
		bool remove(int &);
		void display();
};
