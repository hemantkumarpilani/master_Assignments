#include<iostream>
using namespace std;
#include<string.h>
class employee{
	int id;
	double salary;
	char name[20];
	
	public:
		
	employee(){
		this->id=0;
		this->salary=0;
		strcpy(this->name,"not given");
	}
	
	employee(int id, char* nm, double salary){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
	}
	
	void setid (int id){
		this->id= id;
	}
	
	void setsalary (double salary){
		this->salary= salary;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	int getid (){
		return this->id;
	}
	
	double getsalary (){
		return this->salary;
	}
	
	char* getname (){
		return this->name;
	}
	
	void display(){
	cout<<"\nEmployee s name : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	cout<<"\n\n";
	}
	
};
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

