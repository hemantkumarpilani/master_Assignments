#include"Queue.h"	

Queue::Queue(int s){
	this->front=-1;
	this->rear= -1;
	this->size= s;
	this->q= new int[this->size];
}

Queue::~Queue(){
	if (this->q!=NULL){
		delete []q;
	}
}

bool Queue::isempty(){
	if (this->front==-1 && this->rear== -1){
		return true;
	}
	else {
		return false;
	}
}

bool Queue::isfull(){
	if ((this->front==0  && this->rear==this->size-1)||(this->front== this->rear+1)){
		return true;
	}
	else {
		return false;
	}
}

bool Queue::insert(int &x){
	if(isfull()){
		return false;
	}
	else {
		if (front==-1 && rear== -1){
			this->q[++front]= x;
			rear= front;
			return true;
		}
		else if (rear>=0 && rear<size) {
			this->q[++rear]= x;
			return true;
		}
		else {
			return false;
		}
	}
}

bool Queue::remove(int &x){
	if (isempty()){
		return false;
	}
	else {
		x= this->q[front];
		if (front>=0 && front<rear){
			front++;
			return true;
		}
		else if (front==size-1){
			front=rear=-1;
			return true;
		}
		else {
			return false;
		}	
	}
	
}

void Queue::display(){
	if (isempty()){
		cout<<"No elements to display\n";
	}
	else {
		for (int i= this->front; i<=this->rear; i++){
			cout<<"\t"<<this->q[i];
		}
		cout<<"\n";
	}
}




