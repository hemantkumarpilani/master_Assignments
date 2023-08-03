#include"linkedlist.h"

Linkedlist::Linkedlist(){
	start=NULL;
}

Linkedlist::~Linkedlist(){
	while (start!=NULL){
		Node* p= start;
		start= start->getnext();
		delete p;
	}
}

void Linkedlist::insert_beginning(int data){
	Node* temp= new Node(data);
	temp->setnext(start);
	start=temp;
}

void Linkedlist::insert_end(int data){
	Node* temp= new Node(data);
	if (start==NULL){
		start=temp;
		return;
	}
	Node* p= start;
	while (p->getnext()!=NULL){
		p=p->getnext();
	}
	p->setnext(temp);
}

void Linkedlist::insert_at_position(int data, int position){
	Node* temp= new Node(data);
	if (start==NULL){
		start=temp;
		return;
	}
	if (position==1){
		temp->setnext(start);
		start=temp;
		return;
	}
	Node* p= start;
	int i=1;;
	while (i<position-1 && p->getnext()!=NULL){
		p= p->getnext();
		i++;
	}
	temp->setnext(p->getnext());
	p->setnext(temp);
}

void Linkedlist::delete_position(int position){
	if (start==NULL){
		cout<<"No nodes to delete\n";
		return;
	}
	if (position==1){
		Node*p= start;
		start= start->getnext();
		cout<<p->getdata()<<" is deleted\n";
		delete p;
		return;
	}
	
	Node* p= start;
	int i=1;
	while (i<position-1 && p->getnext()!=NULL){
		p= p->getnext();
		i++;
	}
	Node* q= p->getnext();
	p->setnext(q->getnext());
	cout<<q->getdata()<<" is deleted\n";
	delete q;
}

void Linkedlist::delete_data(int data){
	Node* p= start;
	Node* q;
	if (start==NULL){
		cout<<"No data to delete\n";
		return;
	}
	else {
		while (p->getnext()!=NULL && p->getdata()!=data){
			q= p;
			p=p->getnext();
		}
	}
	
	if (p->getdata()==data){
		if (start==p){
			start= p->getnext();
			cout<<p->getdata()<<" is deleted\n";
			delete p;
			return;
		}
		q->setnext(p->getnext());
		cout<<p->getdata()<<"is deleted\n";
		delete p;
	}
	else {
		cout<<"Data does not match\n";
	}
}

void Linkedlist::display(){
	if (start==NULL){
		cout<<"No nodes to display\n";
	}
	else {
		Node* p= start;
		while (p!=NULL){
			cout<<p->getdata();
			cout<<"\n";
			p=p->getnext();
		}
	}
}
