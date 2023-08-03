#include"distance.h"

int main (){
	dist d,d1(2,24);
	
	double feet;
	
	cout<<"Enter feet:\n";
	cin>>feet;
	
	d.setfeet(feet);
	d.calculate_inch();
	
	d.display();
	d1.display();
	return 0;
}
