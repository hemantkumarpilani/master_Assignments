#include"HR.h"
	
	HR::HR(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->commission=0;
	}
	
	HR::HR(int id, char* nm, double salary, double commission){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->commission= commission;
	}
	void HR:: setid (int id){
		this->id= id;
	}
	
	void HR:: setname (char* name){
		strcpy(this->name,name);
	}
	
	void HR:: setsalary (double salary){
		this->salary= salary;
	}
	
	void HR:: setcommission (double commission){
		this->commission= commission;
	}
	
	
	double HR:: getid (){
		return this->id;
	}
	
	char* HR:: getname (){
		return this->name;
	}
	
	double HR:: getsalary (){
		return this->salary;
	}
	
	double HR:: getcommission (){
		return this->commission;
	}
	
	void HR:: calculate_commission(){
		this->commission= ((this->salary*5)/100);
	}
	
	void HR:: display(){
	cout<<"\nHR 's name : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	cout<<"\nCommission : "<<this->commission;
	cout<<"\n\n";
	}
