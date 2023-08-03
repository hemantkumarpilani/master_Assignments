#include"sales_manager.h"

int main (){
	sales_manager m1,m2(13,"Hemant",34050.456,800,6810.091);
	
	int id,target;
	double salary;
	char name[20];
	
	cout<<"Enter name,id,salary,target\n";
	cout<<"Enter name:\n";
	cin>>name;
	cout<<"Enter id:\n";
	cin>>id;
	cout<<"Enter salary:\n";
	cin>>salary;
	cout<<"Enter target:\n";
	cin>>target;
	
	m1.setid(id);
	m1.setname(name);
	m1.setsalary(salary);
	m1.settarget(target);
	m1.calculate_incentive();
	
	m1.display();
	m2.display();
	return 0;
}
