#include<stdio.h>
#include<string.h>
typedef struct human_resources {
	int id;
	char name[20];
	int salary;
	int commission;
	
	void setid (int id){
		this->id= id;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	void setsalary (int salary){
		this->salary= salary;
	}
	
	void setcommission (int commission){
		commission= ((5*salary)/100);
		this->commission= commission;
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
	
	int getcommission (){
		return this->commission;
	}
	
	void display_HR(){
	printf("HR 's name is %s, id is %d, salary is %d and commission is %d \n",name,id,salary,commission);
	}
	
}HR;
int main (){
	HR h1;
	h1.setid(45);
	h1.setname("Hemant");
	h1.setsalary(25000);
	h1.setcommission(0);
	h1.display_HR();
	return 0;
}
