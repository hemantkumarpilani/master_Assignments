#include<iostream>
using namespace std;
#include<string.h>
class sales_manager{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	
	public:
		
	sales_manager(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->incentive=0;
		this->target=0;
	}
	
	sales_manager(int id, char* nm, double salary, int target, double incentive){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->target= target;
		this->incentive= incentive;
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
	
	void settarget (int target){
		this->target= target;
	}
	
	void setincentive (double incentive){
		this->incentive= incentive;
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
	
	int gettarget (){
		return this->target;
	}
	
	double getincentive (){
		return this->incentive;
	}
	
	void calculate_incentive(){
		
		if (this->target>=500){
		this->incentive= ((20*this->salary)/100);
		}
		
		else {
		this->incentive= ((5*this->salary)/100);
		}
			
	}
	
	void display(){
	cout<<"\nManager 's name : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	cout<<"\nTarget : "<<this->target;
	cout<<"\nIncentive : "<<this->incentive;
	cout<<"\n\n";
	}
	
};
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
