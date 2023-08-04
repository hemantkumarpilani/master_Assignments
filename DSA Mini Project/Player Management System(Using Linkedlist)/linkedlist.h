#include"node.h"

class Linkedlist{
	Node* start;
	
	public:
		Linkedlist();
		~Linkedlist();
		void insert_beginning(player &);
		void insert_end(player &);
		void insert_at_position(player &,int);
		void delete_position(int);
		void delete_runs(int runs);
		void display();
};


