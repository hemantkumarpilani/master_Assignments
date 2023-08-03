//Prime Number using for loop
#include<iostream>
using namespace std;
int main (){
	int num,i,a,flag=0;
	cout<<"Enter Number\n";
	cin>>num;
	for (i=2;i<=num/2;i++){
		a=num%i;
		if (a==0){
			flag=1;
			break;
		}
	}
	if (flag==0){
		cout<<num<<" is a prime number\n";
	}
	else {
		cout<<num<<" is not a prime number\n";
	}
	return 0;
}
