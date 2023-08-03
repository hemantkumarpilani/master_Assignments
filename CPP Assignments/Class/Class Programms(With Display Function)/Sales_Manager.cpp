#include<stdio.h>
#include<string.h>
typedef class sales_manager{
	int id;
	char name[20];
	int salary;
	float incentive;
	int target;
	
	public:
		
	sales_manager(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->incentive=0;
		this->target=0;
	}
	
	sales_manager(int id, char* nm, int salary, int target){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
		this->target= target;
	}
	
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
	
	void display_sales(){
	printf("Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",name,id,salary,target,incentive);
	}
	
}mng;
int main (){
	mng m1,m2(13,"Hemant",20000,800);
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
	printf("Incentive= %f\n",incentive);
	m1.setid(id);
	m1.setname(name);
	m1.setsalary(salary);
	m1.settarget(target);
	m1.setincentive(incentive);
	m2.setincentive((20000*20)/100);
	printf("1st Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",m1.getname(),m1.getid(),m1.getsalary(),m1.gettarget(),m1.getincentive());
	printf("2nd Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",m2.getname(),m2.getid(),m2.getsalary(),m2.gettarget(),m2.getincentive());
	return 0;
}
