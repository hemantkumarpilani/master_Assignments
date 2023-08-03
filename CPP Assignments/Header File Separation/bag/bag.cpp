#include"bag.h"

	bag::bag(){
		this->price=0;
		strcpy(this->company,"not given");
		strcpy(this->colour,"not given");
	}
	
	bag::bag(int price, char* company, char* colour){
		this->price= price;
		strcpy(this->company, company);
		strcpy(this->colour, colour);
	}
	
	void bag::setprice (int price){
		this->price= price;
	}
	
	void bag:: setcompany (char* company){
		strcpy(this->company,company);
	}
	
	void bag:: setcolour (char* colour){
		strcpy(this->colour,colour);
	}
	
	int bag:: getprice (){
		return this->price;
	}
	
	char* bag:: getcompany (){
		return this->company;
	}
	
	char* bag::getcolour (){
		return this->colour;
	}
	
	void bag:: display(){
	cout<<"\nBag s company : "<<this->company;
	cout<<"\nColour: "<<this->colour;
	cout<<"\nPrice: "<<this->price;
	cout<<"\n\n";
	}
