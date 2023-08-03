#include"add.h"

int main (){
	int r,img;
	cout<<"Enter real no\n";
	cin>>r;
	cout<<"Enter imaginary no\n";
	cin>>img;
	complex c1,c2(4,5),c3;
	c1.setreal(r);
	c1.setimaginary(img);
	c1.display_complex();
	c3= c1.add(c2);
	cout<<"Addition of two complex number is "<<c3.getreal()<<"+"<<c3.getimaginary()<<"i"<<endl;
	return 0;
}
