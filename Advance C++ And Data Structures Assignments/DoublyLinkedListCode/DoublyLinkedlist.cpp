#include"DoublyLinkedlist.h"

DoublyLinkedlist::DoublyLinkedlist(){
	start=NULL;
}

DoublyLinkedlist::~DoublyLinkedlist(){
	 while (start!=NULL){
		Node* p= start;
		start= start->getnext();
		delete p;
	}
	cout<<start;
}

void DoublyLinkedlist::insert_beginning(int data){
	Node* temp= new Node (data);
	if (start==NULL){
		start=temp;
		return;
	}
	else {
		temp->setnext(start);
		start->setprev(temp);
		start=temp;
	}
}

void DoublyLinkedlist::insert_end(int data){
	Node* temp= new Node (data);
	if (start==NULL){
		start=temp;
		return;
	}
	else {
		Node* p= start;
		while(p->getnext()!=NULL){
			p=p->getnext();
		}
		p->setnext(temp);
		temp->setprev(p);
	}
}

void DoublyLinkedlist::insert_at_position(int data, int position){
	Node* temp= new Node (data);
	if (start==NULL){
		start=temp;
		return;
	}
	if (position==1){
		temp->setnext(start);
		start->setprev(temp);
		start=temp;
		return;
	}
	else {
		int i=1;
		Node* p= start;
		while(i<position-1){
			p=p->getnext();
			i++;
			if(p->getnext()==NULL){
				break;
			}
		}
		if (p->getnext()==NULL)	{
			p->setnext(temp);
			temp->setprev(p);		
		}
		else {
			temp->setnext(p->getnext());
			p->setnext(temp);
			temp->setprev(p);		
		}
	}
}

void DoublyLinkedlist::delete_position(int position){
	if (start==NULL){
		cout<<"No nodes to delete\n";
		return;
	}
	if (position==1){
		if (start->getnext()==NULL){
			cout<<start->getdata()<<"is deleted\n";
			delete start;
			start=NULL;
			return;
			}
			else {
				Node* p=start;
				start= start->getnext();
				start->setprev(NULL);
				cout<<p->getdata()<<"is deleted\n";
				delete p;
				return;
			}
	}
	if (start->getnext()==NULL && position>1){
		cout<<"Enter correct position\n";
		return;
	}
	if (position>1) {
		Node* p=start;
		int i=1;
		while (i<=position-1){
			p=p->getnext();
			if (p->getnext()==NULL){
				break;
			}
			i++;
		}
		if (p->getnext()==NULL){
			p->getprev()->setnext(NULL);
			cout<<p->getdata()<<"is deleted\n";
			return;
		}
		p->getprev()->setnext(p->getnext());
		p->getnext()->setprev(p->getprev());
		cout<<p->getdata()<<"is deleted\n";
		delete p;
		
	}
}

void DoublyLinkedlist::display(){
	if (start==NULL){
		cout<<"No nodes to display\n";
		return;
	}
	else {
		Node*p= start;
		if (p->getnext()==NULL){
			cout<<p->getdata();
			cout<<"\n";
			return;
			}
		while (p->getnext()!=NULL){
			cout<<p->getdata();
			cout<<"\n";
			p= p->getnext();
		}
		cout<<p->getdata();
		cout<<"\n";
	}
	
}
