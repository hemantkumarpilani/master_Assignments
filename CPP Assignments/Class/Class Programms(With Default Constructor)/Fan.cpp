#include<stdio.h>
#include<string.h>
class fan {
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	
	public:
		
	fan(){
		this->no_of_blades=0;
		strcpy(this->name,"not given");
		this->price=0;
		this->rpm=0;
	}
	
	void setno_of_blades (int no_of_blades){
		this->no_of_blades= no_of_blades;
	}
	
	void setname (char* name){
		strcpy(this->name,name);
	}
	
	void setprice (int price){
		this->price= price;
	}
	
	void setrpm (int rpm){
		this->rpm= rpm;
	}
	
	int getno_of_blades (){
		return this->no_of_blades;
	}
	
	char* getname (){
		return this->name;
	}
	
	int getprice (){
		return this->price;
	}
	
	int getrpm (){
		return this->rpm;
	}
	
	void display_fan(){
	printf("Company of fan is %s having %d blades, rpm is %d and price is %d \n",name,no_of_blades,rpm,price);
	}
	
};
int main (){
	fan f1;
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	printf("Enter no of blades,company,price & rpm\n");
	printf("No. of blades:\n");
	scanf("%d",&no_of_blades);
	printf("Company:\n");
	scanf("%s",&name);
	printf("Price:\n");
	scanf("%d",&price);
	printf("RPM:\n");
	scanf("%d",&rpm);
	f1.setname(name);
	f1.setno_of_blades(no_of_blades);
	f1.setprice(price);
	f1.setrpm(rpm);
	f1.display_fan();
	return 0;
}
