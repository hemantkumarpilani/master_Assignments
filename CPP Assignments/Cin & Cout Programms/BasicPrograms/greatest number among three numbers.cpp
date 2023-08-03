//Greatest of 3 numbers using nested if else
#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cout<<"Enter the all values of a,b and c\n";
	cin>>a>>b>>c;
	if (a>b){
		if (a>c){
			cout<<"The value of a =" <<a <<" is greater\n";
		}
}
	if (b>a){
		if (b>c){
			cout<<"The value of b =" <<b <<" is greater\n";
		}
	}
	if (c>a){
		if (c>b){
			cout<<"The value of c =" <<c <<" is greater\n";
		}
	}
	return 0;
}
