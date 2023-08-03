#include"emp.h"

class myarray{
	int size;
	int index;
	emp *pemp;
	
	public:
		myarray(int);
		void addemp(emp &);
		void display();
		void searchbyID(int);
		void searchbyName(char*);
		void editbyid(int);
		void deletebyid(int);
		~myarray();
};
