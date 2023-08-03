#include"employee.h">
	
	employee::employee(){
		this->id=0;
		this->salary=0;
		strcpy(this->name,"not given");
	}
	
	employee::employee(int id, char* nm, double salary){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
	}
	
	void employee:: setid (int id){
		this->id= id;
	}
	
	void employee:: setsalary (double salary){
		this->salary= salary;
	}
	
	void employee:: setname (char* name){
		strcpy(this->name,name);
	}
	
	int employee:: getid (){
		return this->id;
	}
	
	double employee:: getsalary (){
		return this->salary;
	}
	
	char* employee:: getname (){
		return this->name;
	}
	
	void employee:: display(){
	cout<<"\nEmployee s name : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	cout<<"\n\n";
	}
