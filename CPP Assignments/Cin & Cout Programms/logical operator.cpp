//logical operators
#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter the value of a\n";
	cin>>a;
	cout<<"Enter the value of b\n";
	cin>>b;
	int c,d,e,f,g;
	c= a && b;
	cout<<"The value of c after AND operator is =" <<c <<endl;
	d= a || b;
	cout<<"The value of d after OR operator is "<<d <<endl;
	e= a-- && b++;
	cout<<"The value of e is "<<e <<endl;
	cout<<"The value of a and b is "<<a <<b <<endl;
	f= a-- || b++;
	cout<<"The value of f is "<<f <<endl;
	cout<<"The value of a and b is " <<a <<b <<endl;
	return 0;
}
