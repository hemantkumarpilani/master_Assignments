//Area and perimeter of circle
#include<iostream>
using namespace std;
int main(){
	int r;
	float pi= 3.14;
	float area,perimeter;
	printf("Enter radius \n");
	cin>>r;
	area= pi*r*r;
	perimeter= 2*pi*r;
	cout<<"Area of circle is " <<area <<endl;
	cout<<"Perimeter of circle is " <<perimeter <<endl;
	return 0;
}
