#include<stdio.h>
#include<string.h>
typedef class human_resources {
	int id;
	char name[20];
	int salary;
	int commission;
	
	public:
	
	human_resources(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->commission=0;
	}
	
	human_resources(int id, char* nm, int salary){
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
	
	void display_HR(){
	printf("HR 's name is %s, id is %d, salary is %d and commission is %d \n",name,id,salary,commission);
	}
	
}HR;
int main (){
	int id,salary,commission;
	char name[20];
	HR h1,h2(23,"Puneet",50000);
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
	h2.setcommission((50000*5)/100);	
	h1.display_HR();
	h2.display_HR();
	return 0;
}
//	printf("1st HR 's name is %s, id is %d, salary is %d and commission is %d \n",h1.getname(),h1.getid(),h1.getsalary(),h1.getcommission());
//	printf("2nd HR 's name is %s, id is %d, salary is %d and commission is %d \n",h2.getname(),h2.getid(),h2.getsalary(),h2.getcommission());
