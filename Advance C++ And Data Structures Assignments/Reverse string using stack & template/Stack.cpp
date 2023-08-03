#include"Stack.h"

template<class T>
Stack<T>::Stack(int s){
	this->top= -1;
	this->size= s;
	this->p= new T[this->size];
}

template<class T>
bool Stack<T>::isempty(){
	if (this->top==-1){
		return true;
	}
	else{
		return false;
	}
}

template<class T>
bool Stack<T>::isfull(){
	if (this->top== this->size-1){
		return true;
	}
	else {
		return false;
	}
}

template<class T>
bool Stack<T>::push(T &t){
	if (isfull()){
		return false;
	}
	else {
		this->p[++top]= t;
	}
}

template<class T>
bool Stack<T>::pop(T &t){
	if (isempty()){
		return true;
	}
	else {
		t= this->p[top--];
		this->p[size-1];
		return false;
	}
}

template<class T>
bool Stack<T>::peak(T &t){
	if (isempty()){
		return true;
	}
	else {
		t= this->p[top];
		return false;
	}
}

template<class T>
void Stack<T>::display(){
	if(isempty()){
		cout<<"No elements to display\n";
	}
	else{
		for (int i=top; i>=0;i--){
			cout<<"\t"<<p[i]<<endl;
		}
	}
}

template<class T>
Stack<T>::~Stack(){
	if(p!=NULL){
		delete []p;
	}
}

