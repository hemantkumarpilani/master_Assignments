#include"node.h"

class DoublyLinkedlist{
	Node* start;
	
	public:
		DoublyLinkedlist();
		~DoublyLinkedlist();
		void insert_beginning(int);
		void insert_end(int);
		void insert_at_position(int,int); 
		void delete_position(int);
		void display();
};

