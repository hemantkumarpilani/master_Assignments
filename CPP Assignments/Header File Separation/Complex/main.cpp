#include"complex.h"

int main (){
	int r,img;
	cout<<"Enter real no\n";
	cin>>r;
	
	cout<<"Enter imaginary no\n";
	cin>>img;
	
	complex c1,c2(5,6);
	
	c1.setreal(r);
	c1.setimaginary(img);
	
	c1.display();
	c2.display();
	return 0;
}
