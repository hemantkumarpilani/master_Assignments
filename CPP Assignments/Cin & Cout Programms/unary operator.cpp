//unary operators
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the value of a\n";
	cin>>a;
	int b;
	b= a++;
	cout<<"The value of b after postincrement is "<<b<<endl;
	b=++a;
	cout<<"The value of b after preincrement is "<<b<<endl;
	b= a--;
	cout<<"The value of b after postdecrement is "<<b<<endl;
	b= --a;
	cout<<"The value of b after predecrement is "<<b<<endl;
	return 0;
}
