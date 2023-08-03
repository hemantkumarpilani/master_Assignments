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
	
	float getincentive (){
		return this->incentive;
	}
	
}mng;
int main (){
	mng m1;
	int id,salary,target;
	char name[20];
	float incentive;
	printf("Enter name,id,salary,target \n");
	printf("Enter name:\n");
	scanf("%s",&name);
	printf("Enter id:\n");
	scanf("%d",&id);
	printf("Enter salary:\n");
	scanf("%d",&salary);
	printf("Enter target:\n");
	scanf("%d",&target);
	if (target>=500){
		incentive= ((20*salary)/100);
		}
		else {
		incentive= ((5*salary)/100);
		}
	m1.setid(id);
	m1.setname(name);
	m1.setsalary(salary);
	m1.settarget(target);
	m1.setincentive(incentive);
	printf("Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",m1.getname(),m1.getid(),m1.getsalary(),m1.gettarget(),m1.getincentive());
	return 0;
}
