#include"distance.h"
	
	distance::distance(){
		this->feet=0;
		this->inch=0;
	}
	
	distance::distance(double feet, double inch){
		this->feet= feet;
		this->inch= inch;
	}
	
	void distance:: setfeet (float feet){
		this->feet= feet;
	}
	
	void distance:: setinch (float inch){
		this->inch= inch;
	}
	
	float distance:: getfeet (){
		return this->feet;
	}
	
	float distance:: getinch (){
		return this->inch;
	}
	
	void distance:: calculate_inch(){
		this->inch= this->feet*12;
	}
	
	void distance:: display(){
	cout<<"\nDistance in feet  : "<<feet;
	cout<<"\nDistance in inch : "<<inch;
	cout<<"\n\n";
	}
