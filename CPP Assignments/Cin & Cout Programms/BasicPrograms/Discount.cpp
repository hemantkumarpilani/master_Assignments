#include<iostream>
using namespace std;
int main (){
	int price,discount;
	char c;
	cout<<"Are u a student ??\n";
	cout<<"Enter 'Y'' for yes and 'N' for No\n";
	cin>>c;
	cout<<"Enter price\n";
	cin>>price;
	if (c=='Y'){
		if (price>500){
			discount=20;
			price= price-((price*discount)/100);
			cout<<"New Price after discount 20 percent being a student is " <<price <<endl;
		}
		else {
			discount=10;
			price= price-((price*discount)/100);
			cout<<"New Price after discount 10 percent being a student is " <<price <<endl;
		}
	}
	else {
		if (price>600){
			discount=15;
			price= price-((price*discount)/100);
			cout<<"New Price after discount 15 percent being not a student is " <<price <<endl;
		}
		else {
			cout<<"No discount is given\n";
		}
	}
	return 0;
}
