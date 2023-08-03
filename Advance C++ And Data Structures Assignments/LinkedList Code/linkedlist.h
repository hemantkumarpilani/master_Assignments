#include"node.h"

class Linkedlist{
	Node* start;
	
	public:
		Linkedlist();
		~Linkedlist();
		void insert_beginning(int);
		void insert_end(int);
		void insert_at_position(int,int);
		void delete_position(int);
		void delete_data(int);
		void display();
};
