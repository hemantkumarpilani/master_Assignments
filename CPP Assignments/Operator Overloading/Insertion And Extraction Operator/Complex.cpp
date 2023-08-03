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
	
	void display(){
	cout<<"\nComplex no is "<<r<<"+"<<img<<"i";
	cout<<"\n\n";
	}
	
};

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
