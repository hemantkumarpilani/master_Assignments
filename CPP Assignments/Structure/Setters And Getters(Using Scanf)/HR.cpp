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
	
}HR;
int main (){
	int id,salary,commission;
	char name[20];
	HR h1;
	printf("Enter name,id,salary \n");
	printf("Enter name:\n");
	scanf("%s",&name);
	printf("Enter id:\n");
	scanf("%d",&id);
	printf("Enter salary:\n");
	scanf("%d",&salary);
	commission= ((5*salary)/100);
	h1.setid(id);
	h1.setname(name);
	h1.setsalary(salary);
	h1.setcommission(commission);
	printf("HR 's name is %s, id is %d, salary is %d and commission is %d \n",h1.getname(),h1.getid(),h1.getsalary(),h1.getcommission());
	return 0;
}
