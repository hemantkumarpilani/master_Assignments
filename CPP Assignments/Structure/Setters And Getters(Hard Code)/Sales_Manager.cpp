#include<stdio.h>
#include<string.h>
typedef struct sales_manager{
	int id;
	char name[20];
	int salary;
	float incentive;
	int target;
	
	void setid (int id){
		this->id= id;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	void setsalary (int salary){
		this->salary= salary;
	}
	
	void settarget (int target){
		this->target= target;
	}
	
	void setincentive (int incentive){
		if (target>=500){
		incentive= ((20*salary)/100);
		}
		else {
		incentive= ((5*salary)/100);
		}
		this->incentive= incentive;
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
	
	int gettarget (){
		return this->target;
	}
	
	int getincentive (){
		return this->incentive;
	}
	
	void display_sales(){
	printf("Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",name,id,salary,target,incentive);
	}
	
}mng;
int main (){
	mng m1;
	m1.setid(45);
	m1.setname("Hemant");
	m1.setsalary(40000);
	m1.settarget(700);
	m1.setincentive(0);
	m1.display_sales();
	return 0;
}
