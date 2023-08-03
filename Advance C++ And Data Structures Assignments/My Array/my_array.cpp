#include"myarray.h"

MyArray::MyArray(){
	this->size=0;
	this->index=-1;
	this->p= NULL;
}

MyArray::MyArray(int s){
	this->index= -1;
	this->size= s;
	this->p= new int [size];
}

void MyArray::add_element(int data){
	if (this->size== this->index+1){
		cout<<"Array is full\n";
		return;
	}
	else {
		this->p[++index]= data;
	}
}

void MyArray::search_element(int data){
	if (this->index== -1){
		cout<<"No elements to search \n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			if (data==this->p[i]){
				cout<<"\nRecord found at index "<<i;
				cout<<"\n";
				return;
			}
		}
		cout<<"record not found\n";
	}
}

void MyArray::display_all(){
	if (this->index == -1){
		cout<<"No elements to display\n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			cout<<this->p[i]<<"\t";
		}
		cout<<"\n";
	}
}

void MyArray::deletedata(int data){
	int i;
	if(this->index ==-1){
		cout<<"No elements to delete\n";
		return;
	}
	else {
		bool found= false;
		for (i=0;i<=this->index;i++){
			if (data==this->p[i]){
				found= true;
				break;
			}
		}
		if (found){
			while (i<this->index){
				p[i]=p[i+1];
				i++;
			}
			index--;
			return;
		}
		else {
			cout<<"Record not found\n";
		}
	}
}
