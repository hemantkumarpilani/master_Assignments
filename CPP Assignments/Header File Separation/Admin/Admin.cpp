#include"Admin.h"

	admin::admin(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->allowance=0;
	}
	
	admin::admin(int id, char* nm, double salary, double allowance){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->allowance= allowance;
	}
	
	void admin:: setid (int id){
		this->id= id;
	}
	
	void admin:: setname (char* name){
		strcpy(this->name,name);
	}
	
	void admin:: setsalary (double salary){
		this->salary= salary;
	}
	
	void admin:: setallowance (double allowance){
		this->allowance= allowance;
	}
	
	int admin:: getid (){
		return this->id;
	}
	
	char* admin:: getname (){
		return this->name;
	}
	
	double admin:: getsalary (){
		return this->salary;
	}
	
	double admin:: getallowance (){
		return this->allowance;
	}
	
	void admin:: calculate_allowance(){
		this->allowance= ((5*this->salary)/100);
	}
	
	void admin:: display(){
	cout<<"\n Admin 's name : "<<this->name;
	cout<<"\n Id : "<<this->id;
	cout<<"\n Salary : "<<this->salary;
	cout<<"\n Allowance : " <<this->allowance;
	cout<<"\n\n\n";
	}
