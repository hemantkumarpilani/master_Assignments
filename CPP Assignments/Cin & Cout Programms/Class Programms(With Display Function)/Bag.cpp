#include<iostream>
using namespace std;
#include<string.h>
class bag {
	int price;
	char company[10];
	char colour[10];
	
	public:
		
	bag(){
		this->price=0;
		strcpy(this->company,"not given");
		strcpy(this->colour,"not given");
	}
	
	bag(int price, char* company, char* colour){
		this->price= price;
		strcpy(this->company, company);
		strcpy(this->colour, colour);
	}
	
	void setprice (int price){
		this->price= price;
	}
	
	void setcompany (char* company){
		strcpy(this->company,company);
	}
	
	void setcolour (char* colour){
		strcpy(this->colour,colour);
	}
	
	int getprice (){
		return this->price;
	}
	
	char* getcompany (){
		return this->company;
	}
	
	char* getcolour (){
		return this->colour;
	}
	
	void display(){
	cout<<"\nBag s company : "<<this->company;
	cout<<"\nColour: "<<this->colour;
	cout<<"\nPrice: "<<this->price;
	cout<<"\n\n";
	}
};
int main (){
	int price;
	char company[10];
	char colour[10];
	
	bag b1,b2(2500,"Nike","Black");
	
	cout<<"Enter bag 's company, price & colour\n";
	cout<<"Enter company\n";
	cin>>company;
	fflush(stdin);
	cout<<"Enter price\n";
	cin>>price;
	cout<<"Enter colour:\n";
	cin>>colour;
	
	b1.setcolour(colour);
	b1.setcompany(company);
	b1.setprice(price);
	
	b1.display();
	b2.display();
	return 0;
}
