#include"node.h"

class CircularLinkedlist{
	Node* last;
	
	public:
		CircularLinkedlist();
		~CircularLinkedlist();
		void insert_beginning(int);
		void insert_end(int);
		void insert_at_position(int,int);
		void delete_position(int);
		void display();
};
