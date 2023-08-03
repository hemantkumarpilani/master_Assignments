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
	
	employee(int id, char* nm, int salary){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
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
	emp e1,e2(23,"Hemant",30000);
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
	printf("Employee e2 's name is %s, id is %d and salary is %d \n",e2.getname(),e2.getid(),e2.getsalary());
	return 0;
}

