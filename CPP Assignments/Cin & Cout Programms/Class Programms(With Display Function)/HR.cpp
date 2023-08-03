#include<iostream>
using namespace std;
#include<string.h>
class HR {
	int id;
	char name[20];
	double salary;
	double commission;
	
	public:
	
	HR(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->commission=0;
	}
	
	HR(int id, char* nm, double salary, double commission){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->commission= commission;
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
	
	void setcommission (double commission){
		this->commission= commission;
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
	
	double getcommission (){
		return this->commission;
	}
	
	void calculate_commission(){
		this->commission= ((this->salary*5)/100);
	}
	
	void display(){
	cout<<"\nHR 's name : "<<this->name;
	cout<<"\nId : "<<this->id;
	cout<<"\nSalary : "<<this->salary;
	cout<<"\nCommission : "<<this->commission;
	cout<<"\n\n";
	}
	
};
int main (){
	int id;
	double salary;
	char name[20];
	
	HR h1,h2(23,"Puneet",45687.565,2284.378);
	
	cout<<"Enter name,id,salary \n";
	cout<<"Enter name:\n";
	cin>>name;
	cout<<"Enter id:\n";
	cin>>id;
	cout<<"Enter salary:\n";
	cin>>salary;
	
	h1.setid(id);
	h1.setname(name);
	h1.setsalary(salary);
	h1.calculate_commission();
	
	h1.display();
	h2.display();
	return 0;
}
