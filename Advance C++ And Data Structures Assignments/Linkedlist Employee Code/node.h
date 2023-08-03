#include"emp.h"

class Node{
	emp e;
	Node* next;
	
	public:
		Node(emp&);
		void setemp(emp&);
		void setnext(Node*);
		emp getemp();
		Node* getnext();
};

