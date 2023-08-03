#include<iostream>
using namespace std;
class complex{
	int r;
	int img;
	
	public:
		
	complex(){
		this->r=0;
		this->img=0;
	}
	
	complex(int r, int img){
		this->r= r;
		this->img= img;
	}
	
	void setreal (int real){
		this->r= real;
	}
	
	void setimaginary (int imaginary){
		this->img= imaginary;
	}
	
	int getreal (){
		return this->r;
	}
	
	int getimaginary (){
		return this->img;
	}
	
	complex add (complex c2){
		complex temp;
		temp.r= this->r+c2.r;
		temp.img= this->img+c2.img;
		return temp;
	}
	
	void display_complex(){
	cout<<"Complex no is "<<r<<"+"<<img<<"i"<<endl;
	}
	
};

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
