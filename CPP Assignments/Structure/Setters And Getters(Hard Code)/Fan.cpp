#include<stdio.h>
#include<string.h>
struct fan {
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	
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
	f1.setname("Bajaj");
	f1.setno_of_blades(3);
	f1.setprice(3500);
	f1.setrpm(700);
	f1.display_fan();
	return 0;
}
