//Area and Perimeter of rectangle
#include<iostream>
using namespace std;
int main(){
	int length;
	int breadth;
	printf("Enter length \n");
	cin>>length;
	printf("Enter breadth \n");
	cin>>breadth;
	int area,perimeter;
	area= length*breadth;
	perimeter= 2*(length+breadth);
	cout<<"Area of rectangle is " <<area <<endl;
	cout<<"Perimeter of rectangle is " <<perimeter <<endl;
	return 0;
}
