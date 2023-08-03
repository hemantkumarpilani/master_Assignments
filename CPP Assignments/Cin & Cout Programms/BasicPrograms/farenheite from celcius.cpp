//farenheit from celcius
#include<iostream>
using namespace std;
int main (){
	float farenheite,celcius;
	cout<<"Enter temperature in degee celcius\n";
	cin>>celcius;
	farenheite= (celcius*(((float)9/5))+32);
	cout<<"Tempreature in farenheite is = "<<farenheite <<endl;
	return 0;
}
