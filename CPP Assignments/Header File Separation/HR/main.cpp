#include "HR.h"

int main (){
	int id;
	double salary;
	char name[20];
	
	HR h1,h2(23,"Puneet",45687.565,2284.378);
	
	cout<<"Enter name,id,salary \n";
	cout<<"Enter name:\n";
	cin>>name;
	cout<<"Enter id:\n";
	cin>>id;
	cout<<"Enter salary:\n";
	cin>>salary;
	
	h1.setid(id);
	h1.setname(name);
	h1.setsalary(salary);
	h1.calculate_commission();
	
	h1.display();
	h2.display();
	return 0;
}
