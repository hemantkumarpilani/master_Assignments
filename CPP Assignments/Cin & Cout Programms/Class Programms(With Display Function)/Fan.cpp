#include<iostream>
using namespace std;
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
	
	fan(int no_of_blades, char* nm, int rpm, int price){
		this->no_of_blades= no_of_blades;
		strcpy(this->name, nm);
		this->rpm= rpm;
		this->price= price;
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
	
	void display(){
	cout<<"\nCompany of fan : "<<this->name;
	cout<<"\nNo. of blades : "<<this->no_of_blades;
	cout<<"\nRPM : "<<this->rpm;
	cout<<"\nPrice : "<<this->price;
	cout<<"\n\n";
	}
};
int main (){
	fan f1,f2(3,"Crompton",600,3000);
	
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	
	cout<<"Enter no of blades,company,price & rpm\n";
	cout<<"No. of blades:\n";
	cin>>no_of_blades;
	cout<<"Company:\n";
	cin>>name;
	cout<<"Price:\n";
	cin>>price;
	cout<<"RPM:\n";
	cin>>rpm;
	
	f1.setname(name);
	f1.setno_of_blades(no_of_blades);
	f1.setprice(price);
	f1.setrpm(rpm);
	
	f1.display();
	f2.display();
	
	return 0;
}
