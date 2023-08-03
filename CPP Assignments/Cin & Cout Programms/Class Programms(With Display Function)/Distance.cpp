#include<iostream>
using namespace std;
typedef class distance{
	double feet;
	double inch;
	
	public:
		
	distance(){
		this->feet=0;
		this->inch=0;
	}
	
	distance(double feet, double inch){
		this->feet= feet;
		this->inch= inch;
	}
	
	void setfeet (float feet){
		this->feet= feet;
	}
	
	void setinch (float inch){
		this->inch= inch;
	}
	
	float getfeet (){
		return this->feet;
	}
	
	float getinch (){
		return this->inch;
	}
	
	void calculate_inch(){
		this->inch= this->feet*12;
	}
	
	void display(){
	cout<<"\nDistance in feet : "<<feet;
	cout<<"\nDistance in inch : "<<inch;
	cout<<"\n\n";
	}
	
}dist;
int main (){
	dist d,d1(2,24);
	
	double feet;
	
	cout<<"Enter feet:\n";
	cin>>feet;
	
	d.setfeet(feet);
	d.calculate_inch();
	
	d.display();
	d1.display();
	return 0;
}
