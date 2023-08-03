//Reverse of number using for loop
#include<iostream>
using namespace std;
int main (){
	int a,b,i,r,rev_num=0,n=0;
	cout<<"Enter number\n";
	cin>>a;
	b=a;
	while (b>0){	
		b=b/10;
		n=n+1;	
	}
	for (i=0;i<n;i++){
		r=a%10;
		rev_num=rev_num*10+r;
		a=a/10;
	}
	cout<<"The reverse number is "<<rev_num<<endl;
	return 0;
}

