#include"node.h"

class Linkedlist{
	Node* start;
	
	public:
		Linkedlist();
		~Linkedlist();
		void insert_beginning(emp &);
		void insert_end(emp &);
		void insert_at_position(emp &,int);
		void delete_position(int);
		void delete_id(int);
		void display();
};

