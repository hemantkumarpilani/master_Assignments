#include<iostream>
using namespace std;
#include<string.h>
class admin {
	int id;
	char name[20];
	double salary;
	double allowance;
	
	public:
		
	admin(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->allowance=0;
	}
	
	admin(int id, char* nm, double salary, double allowance){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->allowance= allowance;
	}
	
	void setid (int id){
		this->id= id;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	void setsalary (double salary){
		this->salary= salary;
	}
	
	void setallowance (double allowance){
		this->allowance= allowance;
	}
	
	int getid (){
		return this->id;
	}
	
	char* getname (){
		return this->name;
	}
	
	double getsalary (){
		return this->salary;
	}
	
	double getallowance (){
		return this->allowance;
	}
	
	void calculate_allowance(){
		this->allowance= ((5*this->salary)/100);
	}
	
	void display(){
	cout<<"\n Admin 's name : "<<this->name;
	cout<<"\n Id : "<<this->id;
	cout<<"\n Salary : "<<this->salary;
	cout<<"\n Allowance : " <<this->allowance;
	cout<<"\n\n\n";
	}
	
	
};
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
