#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	char op;
	cout<<"Enter operator\n";
	cin>>op;
	cout<<"Enter value of a and b\n";
	cin>>a>>b;
	if (op=='+'){
		c=a+b;
		cout<<"Sum is " <<c;
	}
	else if (op=='-'){
		c=a-b;
		cout<<"Difference is " <<c;
	}
	else if (op=='*'){
		c=a*b;
		cout<<"Multiplication is " <<c;
	}
	else if (op=='/'){
		c=a/b;
		cout<<"Division is " <<c;
	}
	else if (op=='%'){
		c=a%b;
		cout<<"Modulus is " <<c;
	}
	else {
		cout<<"Enter a valid operator\n";
	}
	return 0;
}
