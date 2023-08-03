#include"Admin.h"
int main (){
	int id;
	double salary,allowance;
	char name[20];
	
	admin a1,a2(45,"Puneet",56000.5,2800.025);
	
	cout<<"Enter name,id,salary:\n";
	cout<<"Enter name\n";
	cin>>name;
	cout<<"Enter id\n";
	cin>>id;
	cout<<"Enter salary\n";
	cin>>salary;
	
	a1.setid(id);
	a1.setname(name);
	a1.setsalary(salary);
	a1.calculate_allowance();
	
	a1.display();
	
	a2.display();
	 
	
	return 0;
}
