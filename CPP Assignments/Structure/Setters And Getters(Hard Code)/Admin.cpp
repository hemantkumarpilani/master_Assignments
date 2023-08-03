#include<stdio.h>
#include<string.h>
typedef struct admin {
	int id;
	char name[20];
	int salary;
	int allowance;
	
	void setid (int id){
		this->id= id;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	void setsalary (int salary){
		this->salary= salary;
	}
	
	void setallowance (int allowance){
		this->allowance= allowance;
	}
	
	int getid (){
		return this->id;
	}
	
	char* getname (){
		return this->name;
	}
	
	int getsalary (){
		return this->salary;
	}
	
	int getallowance (){
		return this->allowance;
	}
	
	void display_admin(){
	printf("Admin 's name is %s, id is %d, salary is %d and allowance is %d \n",name,id,salary,allowance);
	}
}adm;
int main (){
	adm a1;
	a1.setid(25);
	a1.setname("Hemant");
	a1.setsalary(50000);
	a1.setallowance((5*50000)/100);
	a1.display_admin();
	return 0;
}
