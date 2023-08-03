#include<iostream>
using namespace std;
#include<string.h>
class employee{
	int id;
	double salary;
	char name[20];
	
	public:
		
	employee(){
		cout<<"\nemployee default constructor called";
		this->id=0;
		this->salary=0;
		strcpy(this->name,"not given");
	}
	
	employee(int id, char* nm, double salary){
		cout<<"\nemployee parameterised constructor called";
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
		cout<<"\nsales_manager default constructor called";
		this->incentive=0;
		this->target=0;
	}
	
	sales_manager(int id, char* nm, double salary, int target, double incentive) : employee(id,nm,salary){
		cout<<"\nsales_manager parameterised constructor called";
		cout<<"\n\n";
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
		cout<<"\nAdmin default constructor called";
		this->allowance=0;
	}
	
	admin(int id, char* nm, double salary, double allowance) : employee(id,nm,salary){
		cout<<"\nAdmin parameterised constructor called";
		cout<<"\n\n";
		this->allowance= allowance;
	}
	
	void setallowance (double allowance){
		this->allowance= allowance;
	}
	
	double getallowance (){
		return this->allowance;
	}
	
	void display(){
	employee::display();
	cout<<"\n Allowance : " <<this->allowance;
	cout<<"\n\n";
	}
	
};//class admin ends here

class HR : public employee{
	double commission;
	
	public:
	
	HR() : employee(){
		cout<<"\nHR default constructor called";
		this->commission=0;
	}
	
	HR(int id, char* nm, double salary, double commission) : employee(id,nm,salary){
		cout<<"\nHR parameterised constructor called";
		cout<<"\n\n";
		this->commission= commission;
	}
	
	void setcommission (double commission){
		this->commission= commission;
	}
	
	
	double getcommission (){
		return this->commission;
	}
	
	void display(){
		employee::display();
	cout<<"\nCommission : "<<this->commission;
	cout<<"\n\n";
	}
	
};// class HR ends here

int main (){
	HR h1(13,"Abhijeet",30000,2000);
	h1.display();
	
	admin a1(8,"Ankit",50000,3000);
	a1.display();
	
	sales_manager s1(20,"Hemant",20000,500,700);
	s1.display();
	
	employee e1(5,"Ajay",15000);
	e1.display();
}

