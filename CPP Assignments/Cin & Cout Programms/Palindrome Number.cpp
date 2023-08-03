// Reverse of no and check no is palindrome or not
#include<iostream>
using namespace std;
int main(){
	int num,q,r,rev_num;
	cout<<"Enter number\n";
	cin>>num;
	q= num/10;
	r= num%10;
	rev_num= r*100;
	r= q%10;
	q= q/10;
	rev_num= rev_num+r*10+q;
	cout<<"The Reverse number is "<<rev_num <<endl;
	
	if (rev_num==num){
		cout<<"No is palindrome\n";
	}
	else {
		cout<<"No is not palindrome \n";
	}
	return 0;
}
