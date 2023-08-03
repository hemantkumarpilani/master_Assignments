//Find out interest in a program
#include<iostream>
using namespace std;
int main (){
	int principal,rate,time,interest;
	cout<<"Enter prinicipal\n";
	cin>>principal;
	cout<<"Enter rate in percentage\n";
	cin>>rate;
	cout<<"Enter time\n";
	cin>>time;
	interest= (principal*rate*time)/100;
	cout<<"Interest is = "<<interest <<endl;
	return 0;
}
