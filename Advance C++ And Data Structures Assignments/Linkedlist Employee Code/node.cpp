#include"node.h"

Node::Node(emp &t){
	this->e=t;
	this->next=NULL;
}

void Node::setemp(emp &t){
	this->e=t;
}

void Node::setnext(Node* n){
	this->next= n;
}

emp Node::getemp(){
	return e;
}

Node* Node::getnext(){
	return next;
}



