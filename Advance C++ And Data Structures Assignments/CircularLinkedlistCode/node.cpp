#include"node.h"

Node::Node(int data){
	this->data= data;
	this->next= NULL;
}

void Node::setdata(int d){
	this->data=d;
}

void Node::setnext(Node* n){
	this->next= n;
}

int Node::getdata(){
	return data;
}

Node* Node::getnext(){
	return next;
}



