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
	
}adm;
int main (){
	int id,salary,allowance;
	char name[20];
	adm a1;
	printf("Enter name,id,salary:\n");
	printf("Enter name\n");
	scanf("%s",&name);
	printf("Enter id\n");
	scanf("%d",&id);
	printf("Enter salary\n");
	scanf("%d",&salary);
	allowance= ((5*salary)/100);
	a1.setid(id);
	a1.setname(name);
	a1.setsalary(salary);
	a1.setallowance(allowance);
	
	printf("Admin 's name is %s, id is %d, salary is %d and allowance is %d \n",a1.getname(),a1.getid(),a1.getsalary(),a1.getallowance());
	return 0;
}
