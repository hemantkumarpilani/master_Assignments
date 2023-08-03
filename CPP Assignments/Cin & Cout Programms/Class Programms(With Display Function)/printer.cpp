#include<iostream>
using namespace std;

class printer {
	
	public:
		
	void print(int a){
		cout<<a<<endl;
	}
	
	void print(){
		cout<<"Hello\n";
	}
	
	void print(char a){
		cout<<a<<endl;
	}
	
	void print(int a, char b){
		cout<<a<<" " <<b<<endl;
	}
	
	void print(char a, int b){
		cout<<a<<" " <<b<<endl;
	}
	
};

int main (){
	printer p;
	p.print();
	p.print(10);
	p.print('A');
	p.print(20,'B');
	p.print('C',30);
	return 0;
}
