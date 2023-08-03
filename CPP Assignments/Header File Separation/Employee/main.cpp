#include"employee.h"

int main (){
	employee e1,e2(23,"Hemant",34500.256);
	
	int id;
	double salary;
	char name[20];
	
	cout<<"Enter employee 's id, name and salary\n";
	cout<<"Enter id:\n";
	cin>>id;
	cout<<"Enter name:\n";
	cin>>name;
	cout<<"Enter salary:\n";
	cin>>salary;
	
	e1.setid(id);
	e1.setname(name);
	e1.setsalary(salary);
	
	e1.display();
	e2.display();
	return 0;
}
