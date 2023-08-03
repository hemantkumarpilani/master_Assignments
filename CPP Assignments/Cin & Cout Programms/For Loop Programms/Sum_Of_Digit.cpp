//Sum of digit using for loop
#include<iostream>
using namespace std;
int main (){
	int number,n=0,r,a,i,sum=0;
	cout<<"Enter number\n";
	cin>>number;
	a=number;
	while (a>0){	
		a=a/10;
		n=n+1;	
	}
	for (i=0;i<n;i++){
		r=number%10;
		sum=sum+r;
		number=number/10;
	}
	cout<<"Sum of digits of entered number "<<sum<<endl;
	return 0;
}
