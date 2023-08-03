#include"sales_manager.h"

	sales_manager::sales_manager(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->incentive=0;
		this->target=0;
	}
	
	sales_manager::sales_manager(int id, char* nm, double salary, int target, double incentive){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->target= target;
		this->incentive= incentive;
	}
	
	void sales_manager:: setid (int id){
		this->id= id;
	}
	
	void sales_manager:: setname (char* name){
		strcpy(this->name,name);
	}
	
	void sales_manager:: setsalary (double salary){
		this->salary= salary;
	}
	
	void sales_manager:: settarget (int target){
		this->target= target;
	}
	
	void sales_manager:: setincentive (double incentive){
		this->incentive= incentive;
	}
	
	int sales_manager:: getid (){
		return this->id;
	}
	
	char* sales_manager:: getname (){
		return this->name;
	}
	
	double sales_manager:: getsalary (){
		return this->salary;
	}
	
	int sales_manager:: gettarget (){
		return this->target;
	}
	
	double sales_manager:: getincentive (){
		return this->incentive;
	}
	
	void sales_manager:: calculate_incentive(){
		
		if (this->target>=500){
		this->incentive= ((20*this->salary)/100);
		}
		
		else {
		this->incentive= ((5*this->salary)/100);
		}
			
	}
	
	void sales_manager::display(){
	cout<<"\nManager 's name : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	cout<<"\nTarget : "<<this->target;
	cout<<"\nIncentive : "<<this->incentive;
	cout<<"\n\n";
	}
