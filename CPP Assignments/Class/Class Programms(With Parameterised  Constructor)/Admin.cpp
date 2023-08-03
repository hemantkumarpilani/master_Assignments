#include<stdio.h>
#include<string.h>
typedef class admin {
	int id;
	char name[20];
	int salary;
	int allowance;
	
	public:
		
	admin(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->allowance=0;
	}
	
	admin(int id, char* nm, int salary){
		this->id= id;
		strcpy(this->name, nm);
		this->salary= salary;
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
	
	void display_admin(){
	printf("admin 's name is %s, id is %d, salary is %d and allowance is %d \n",name,id,salary,allowance);
	}
	
}adm;
int main (){
	int id,salary,allowance;
	char name[20];
	adm a1,a2(45,"Puneet",50000);
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
	a2.setallowance((50000*5)/100);
	a1.display_admin();
	a2.display_admin();
	return 0;
}
//	printf("1st admin 's name is %s, id is %d, salary is %d and allowance is %d \n",a1.getname(),a1.getid(),a1.getsalary(),a1.getallowance());
//	printf("2nd admin 's name is %s, id is %d, salary is %d and allowance is %d \n",a2.getname(),a2.getid(),a2.getsalary(),a2.getallowance());
