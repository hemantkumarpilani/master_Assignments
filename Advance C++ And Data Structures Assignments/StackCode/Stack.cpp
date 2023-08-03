#include"Stack.h"

Stack::Stack(int s){
	this->top= -1;
	this->size= s;
	this->p= new int[this->size];
}

bool Stack::isempty(){
	if (this->top==-1){
		return true;
	}
	else{
		return false;
	}
}

bool Stack::isfull(){
	if (this->top== this->size-1){
		return true;
	}
	else {
		return false;
	}
}

bool Stack::push(int &t){
	if (isfull()){
		return false;
	}
	else {
		this->p[++top]= t;
	}
}

bool Stack::pop(int &t){
	if (isempty()){
		return false;
	}
	else {
		t= this->p[top];
		this->p[top]= this->p[--top];
	}
}

bool Stack::peak(int &t){
	if (isempty()){
		return false;
	}
	else {
		t=this->p[top];
	}
}

void Stack::display(){
	if(isempty()){
		cout<<"No elements to display\n";
	}
	else{
		for (int i=top; i>=0;i--){
			cout<<"\t"<<p[i]<<endl;
		}
	}
}

Stack::~Stack(){
	if(p!=NULL){
		delete []p;
	}
}
