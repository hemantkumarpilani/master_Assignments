#include<stdio.h>
#include<string.h>
typedef class employee{
	int id;
	int salary;
	char name[20];
	
	public:
		
	employee(){
		this->id=0;
		this->salary=0;
		strcpy(this->name,"not given");
	}
	
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
	e1.display_employee();
	return 0;
}

