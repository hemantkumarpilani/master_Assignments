//program of sum of 5 digits
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number\n";
	cin>>num;
	int a,b,c,d,e,f,g,h,ans;
	a= num/10;					//quotient=5652
	b= num%10;					//remainder=3;
	c= a/10;					//quotient=565
	d= a%10;					//remainder=2
	e= c/10;					//quotient=56
	f= c%10;					//remainder=5
	g= e/10;					//quotient=5
	h= e%10;					//remainder=6
	ans= b+d+f+g+h;
	cout<<"ans is = "<<ans <<endl;
	return 0;
}
