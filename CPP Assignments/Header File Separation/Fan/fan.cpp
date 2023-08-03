#include"fan.h"

	fan::fan(){
		this->no_of_blades=0;
		strcpy(this->name,"not given");
		this->price=0;
		this->rpm=0;
	}
	
	fan::fan(int no_of_blades, char* nm, int rpm, int price){
		this->no_of_blades= no_of_blades;
		strcpy(this->name, nm);
		this->rpm= rpm;
		this->price= price;
	}
	
	void fan:: setno_of_blades (int no_of_blades){
		this->no_of_blades= no_of_blades;
	}
	
	void fan:: setname (char* name){
		strcpy(this->name,name);
	}
	
	void fan:: setprice (int price){
		this->price= price;
	}
	
	void fan:: setrpm (int rpm){
		this->rpm= rpm;
	}
	
	int fan:: getno_of_blades (){
		return this->no_of_blades;
	}
	
	char* fan::getname (){
		return this->name;
	}
	
	int fan:: getprice (){
		return this->price;
	}
	
	int fan:: getrpm (){
		return this->rpm;
	}
	
	void fan:: display(){
	cout<<"\nCompany of fan : "<<this->name;
	cout<<"\nNo. of blades : "<<this->no_of_blades;
	cout<<"\nRPM : "<<this->rpm;
	cout<<"\nPrice : "<<this->price;
	cout<<"\n\n";
	}
