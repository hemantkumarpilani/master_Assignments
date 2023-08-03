#include"complex.h"
	
	complex::complex(){
		this->r=0;
		this->img=0;
	}
	
	complex::complex(int r, int img){
		this->r= r;
		this->img= img;
	}
	
	void complex:: setreal (int real){
		this->r= real;
	}
	
	void complex:: setimaginary (int imaginary){
		this->img= imaginary;
	}
	
	int complex:: getreal (){
		return this->r;
	}
	
	int complex:: getimaginary (){
		return this->img;
	}
	
	void complex:: display(){
	cout<<"\nComplex no is "<<r<<"+"<<img<<"i";
	cout<<"\n\n";
	}
