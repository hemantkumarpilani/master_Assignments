#include"node.h"

Node::Node(player &t){
	this->p=t;
	this->next=NULL;
}

void Node::setplayer(player &t){
	this->p=t;
}

void Node::setnext(Node* n){
	this->next= n;
}

player Node::getplayer(){
	return p;
}

Node* Node::getnext(){
	return next;
}




