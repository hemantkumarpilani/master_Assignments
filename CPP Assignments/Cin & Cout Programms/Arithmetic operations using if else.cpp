#include<iostream>
using namespace std;
int main (){
	int a;
	int b;
	int choice;
	cout<<"\n choice=1 for addition \n choice=2 for subtraction \n choice=3 for multiplication \n choice=4 for division \n";
	cout<<"Enter the value of a \n";
	cin>>a;
	cout<<"Enter the value of b \n";
	cin>>b;
	cout<<"Enter the choice \n";
	cin>>choice;
	if (choice==1){
		cout<<"Sum is = "<<a+b<<endl;
	}
	else if (choice==2){
		cout<<"Subtraction is = "<<a-b<<endl;
	}
	else if (choice==3){
		cout<<"Multiplication is = "<<a*b<<endl;
	}
	else if (choice==4){
		cout<<"Division is = "<<a/b<<endl;
	}
}
