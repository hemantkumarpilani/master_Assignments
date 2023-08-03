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
	
	virtual void display(){
	cout<<"\nName : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	}
	
};// class employee ends here

class sales_manager :public employee {
	double incentive;
	int target;
	
	public:
		
	sales_manager() :employee(){
		this->incentive=0;
		this->target=0;
	}
	
	sales_manager(int id, char* nm, double salary, int target, double incentive) : employee(id,nm,salary){
		this->target= target;
		this->incentive= incentive;
	}
	
	
	void settarget (int target){
		this->target= target;
	}
	
	void setincentive (double incentive){
		this->incentive= incentive;
	}
	
	int gettarget (){
		return this->target;
	}
	
	double getincentive (){
		return this->incentive;
	}
	
	void display(){
		cout<<"Sales manager details printing : \n";
		employee::display();
	cout<<"\nTarget : "<<this->target;
	cout<<"\nIncentive : "<<this->incentive;
	cout<<"\n\n";
	}
	
};// class sales_manager ends here

class admin :public employee {
	double allowance;
	
	public:
		
	admin() : employee(){
		this->allowance=0;
	}
	
	admin(int id, char* nm, double salary, double allowance) : employee(id,nm,salary){
		this->allowance= allowance;
	}
	
	void setallowance (double allowance){
		this->allowance= allowance;
	}
	
	double getallowance (){
		return this->allowance;
	}
	
	void display(){
		cout<<"Admin details printing : \n";
	employee::display();
	cout<<"\nAllowance : " <<this->allowance;
	cout<<"\n\n";
	}
	
};//class admin ends here

class HR : public employee{
	double commission;
	
	public:
	
	HR() : employee(){
		this->commission=0;
	}
	
	HR(int id, char* nm, double salary, double commission) : employee(id,nm,salary){
		this->commission= commission;
	}
	
	void setcommission (double commission){
		this->commission= commission;
	}
	
	
	double getcommission (){
		return this->commission;
	}
	
	void display(){
		cout<<"HR details printing : \n";
		employee::display();
	cout<<"\nCommission : "<<this->commission;
	cout<<"\n\n";
	}
	
};// class HR ends here

int main (){
	employee* e1;
	
	sales_manager s1(20,"Hemant",20000,500,700);
	e1= &s1;
	e1->display();
	
	admin a1(8,"Ankit",50000,3000);
	e1= &a1;
	e1->display();
	
	HR h1(13,"Abhijeet",30000,2000);
	e1= &h1;
	e1->display();
}

