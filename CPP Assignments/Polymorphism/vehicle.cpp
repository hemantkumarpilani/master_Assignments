#include<iostream>
using namespace std;
#include<string.h>
class vehicle {
	
	int price;
	
	public :
		
		virtual void apply_brake(){
			cout<<"brake has applied ";
		}
};

class bike : public vehicle {
	
	public :
		
		bike(){
		}
		
		void apply_brake(){
			cout<<"Bike behaviour has shown :\n";
			vehicle::apply_brake();
			cout<<"through disc brakes\n";
			cout<<"\n\n";
		}
};

class car : public vehicle {
	
	public :
		
		car(){
		}
		
		void apply_brake(){
			cout<<"Car behaviour has shown :\n";
			vehicle::apply_brake();
			cout<<"through drum brakes\n";
			cout<<"\n\n";
	}
};

class bus : public vehicle {

	public :
		
		bus(){
		}
		
		void apply_brake(){
			cout<<"Bus behaviour has shown :\n";
			vehicle::apply_brake();
			cout<<"through air brakes\n";
			cout<<"\n\n";
		}
};

int main (){
	vehicle* v;
	
	bike b1;
	v= &b1;
	v->apply_brake();
	
	car c1;
	v= &c1;
	v->apply_brake();
	
	bus B1;
	v= &B1;
	v->apply_brake();
	return 0;	
}
