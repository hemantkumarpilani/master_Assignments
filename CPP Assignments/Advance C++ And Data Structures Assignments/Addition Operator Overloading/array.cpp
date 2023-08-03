#include "array.h"

array::array(){
	this->index= -1;
	this->size=0;
	this->p= NULL;
}

array::array(int s){
	this->index=-1;
	this->size= s;
	this->p= new int[this->size];
}

void array::add_element(int data){
	if (this->size== this->index+1){
		cout<<"Array is full \n";
		return;
	}
	else {
		this->index++;
		this->p[this->index]= data;
	}
}

array array::operator+(array a2){
	int s= this->size+a2.size;
	array a3(s);
	for (int i=0; i<this->size; i++){
		a3.p[i]= this->p[i];
		cout<<a3.p[i]<<endl;
	}
	for (int i=this->size, j=0; i<this->size+a2.size; i++,j++){
		a3.p[i]= a2.p[j];
		cout<<a3.p[i]<<endl;
		a3.index=  i;
	}
	
	return a3;
	
}

void array::display(){
	if (this->index== -1){
		cout<<"Nothing to display \n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			cout<<"\t"<<this->p[i];
		}
		cout<<"\n";
	}	
}
