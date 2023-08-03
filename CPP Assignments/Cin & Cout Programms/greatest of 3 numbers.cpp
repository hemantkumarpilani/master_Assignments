//Greatest of 3 numbers
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the value of a\n";
	cin>>a;
	cout<<"Enter the value of b\n";
	cin>>a;
	cout<<"Enter the value of c\n";
	cin>>a;
	if ((a>b)&&(a>c)){
		cout<<a<<" is greater no\n";
	}
	else if ((b>a)&&(b>c)){
		cout<<b<<" is greater no\n";
	}
	else if ((c>a)&&(c>b)){
		cout<<c<<" is greater no\n";
	} 
	return 0;
}
