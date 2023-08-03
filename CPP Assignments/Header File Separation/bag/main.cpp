#include"bag.h"
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
