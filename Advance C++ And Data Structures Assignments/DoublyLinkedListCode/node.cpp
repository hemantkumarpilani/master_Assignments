#include"node.h"

Node::Node(int data){
	this->data= data;
	this->next= NULL;
	this->prev= NULL;
}

void Node::setdata(int d){
	this->data=d;
}

void Node::setnext(Node* n){
	this->next= n;
}

void Node::setprev(Node* p){
	this->prev=p;
}

int Node::getdata(){
	return data;
}

Node* Node::getnext(){
	return next;
}

Node* Node::getprev(){
	return prev;
}



