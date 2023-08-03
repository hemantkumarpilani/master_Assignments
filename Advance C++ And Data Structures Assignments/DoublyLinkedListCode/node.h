#include<iostream>
using namespace std;

class Node{
	int data;
	Node *next, *prev;
	
	public:
		Node(int);
		void setdata(int);
		void setnext(Node*);
		void setprev(Node*);
		int getdata();
		Node* getnext();
		Node* getprev();
};

