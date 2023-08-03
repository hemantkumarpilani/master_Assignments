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
	
}emp;
int main (){
	emp e1;
	int id,salary;
	char name[20];
	printf("Enter employee 's id, name and salary\n");
	printf("Enter id:\n");
	scanf("%d",&id);
	printf("Enter name:\n");
	scanf("%s",&name);
	printf("Enter salary:\n");
	scanf("%d",&salary);
	e1.setid(id);
	e1.setname(name);
	e1.setsalary(salary);
	printf("Employee e1 's name is %s, id is %d and salary is %d \n",e1.getname(),e1.getid(),e1.getsalary());
	return 0;
}

