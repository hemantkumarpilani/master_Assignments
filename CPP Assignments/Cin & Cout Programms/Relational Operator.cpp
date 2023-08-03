//relational operatrors
#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter the value of a\n";
	cin>>a;
	cout<<"Enter the value of b\n";
	cin>>b;
	int c,d,e,f,g,h,i;
	c=a<b;
	cout<<"The value of c is "<<c <<endl;
	d=a>b;
	cout<<"The value of d is "<<d <<endl;
	e= a>=b;
	cout<<"The value of e is "<<e <<endl;
	f= a<=b;
	cout<<"The value of f is "<<f <<endl;
	g= a==b;
	cout<<"The value of g is "<<g <<endl;
	h= a!=b;
	cout<<"The value of h is "<<h <<endl;
	i=a=b;
	cout<<"The value of i is "<<i <<endl;
	return 0;
}
