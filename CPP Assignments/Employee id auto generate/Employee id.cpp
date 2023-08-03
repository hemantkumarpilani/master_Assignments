#include<stdio.h>
#include<string.h>
class employee{
	int id;
	int salary;
	char name[20];
	static int count;
	public:
		
		
	employee(){
		this->id= this->count++;
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
	
};
int employee :: count=100;
int main (){
	employee e1,e2,e3,e4,e5;
	printf("e1 s id is %d\n",e1.getid());
	printf("e2 s id is %d\n",e2.getid());
	printf("e3 s id is %d\n",e3.getid());
	printf("e4 s id is %d\n",e4.getid());
	printf("e5 s id is %d\n",e5.getid());
}

