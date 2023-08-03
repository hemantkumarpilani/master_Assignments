//factorial using for loop;
#include<iostream>
using namespace std;
int main (){
	int a,i;
	cout<<"Enter number\n";
	cin>>a;
	for (i=a-1;i>0;i--)
	{
		a=a*i;
	}
	cout<<"Factorial of entered number is "<<a<<endl;
	return 0;
}
