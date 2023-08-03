//Sum of 3 digits
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number\n";
	cin>>num;
	
	int a,b,c,d,ans;
	a=num/10;
	b=num%10;
	c=a/10;
	d=a%10;
	ans=b+c+d;
	cout<<"Sum of 3 digits is "<<ans <<endl;
}
