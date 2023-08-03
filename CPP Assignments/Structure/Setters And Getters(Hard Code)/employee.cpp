#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id;
	int salary;
	char name[20];
	
	void setid (int id){
		this->id= id;
	}
	
	void setsalary (int salary){
		this->salary= salary;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	int getid (){
		return this->id;
	}
	
	int getsalary (){
		return this->salary;
	}
	
	char* getname (){
		return this->name;
	}
	
void display_employee(){
	printf("Employee e1 's name is %s, id is %d and salary is %d \n",name,id,salary);
	}
	
}emp;
int main (){
	emp e1;
	e1.setid(34);
	e1.setname("Hemant");
	e1.setsalary(20000);
	e1.display_employee();
	return 0;
}

