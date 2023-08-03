#include"add.h"

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
	
	complex complex:: add (complex c2){
		complex temp;
		temp.r= this->r+c2.r;
		temp.img= this->img+c2.img;
		return temp;
	}
	
	void complex:: display_complex(){
	cout<<"Complex no is "<<r<<"+"<<img<<"i"<<endl;
	}

