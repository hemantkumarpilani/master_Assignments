#include<iostream>
using namespace std;

class Node{
	int data;
	Node* next;
	
	public:
		Node(int);
		void setdata(int);
		void setnext(Node*);
		int getdata();
		Node* getnext();
};
