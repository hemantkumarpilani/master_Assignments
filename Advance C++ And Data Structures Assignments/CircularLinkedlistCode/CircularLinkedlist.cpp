#include"CircularLinkedlist.h"

CircularLinkedlist::CircularLinkedlist(){
	last=NULL;
}

CircularLinkedlist::~CircularLinkedlist(){
	Node* p= last->getnext();
	while (last!=NULL){
		Node* q=p;
		p=p->getnext();
		delete q;
		if (p==last){
			delete p;
			last=NULL;
		}
	}
	cout<<last;
}

void CircularLinkedlist::insert_beginning(int data){
	Node* temp= new Node(data);
	if (last==NULL){
		temp->setnext(temp);
		last=temp;
		return;
	}
	else {
		temp->setnext(last->getnext());
		last->setnext(temp);	 
	}
	
}

void CircularLinkedlist::insert_end(int data){
	Node* temp= new Node(data);
	Node* q= last->getnext();
	last->setnext(temp);
	last= temp;
	temp->setnext(q);
}

void CircularLinkedlist::insert_at_position(int data,int position){
	Node* temp= new Node(data);
	if (last==NULL){
		temp->setnext(temp);
		last=temp;
		return;
	}
	if (position==1){
		temp->setnext(last->getnext());
		last->setnext(temp);
		return;	 
	}
	else {
		 Node* p= last->getnext();
		 int i= 1;
		 while (i<position-1){
			p=p->getnext();
			i++;
			if(p==last){
				break;
			}
		 }
		 if (p==last){
		 	Node* q= last->getnext();
			last->setnext(temp);
			last= temp;
			temp->setnext(q);
			return;
		}
		 else {
		 	temp->setnext(p->getnext());
		 	p->setnext(temp);

		}
	}
}

void CircularLinkedlist::delete_position(int position){
	if (last==NULL)	{
		cout<<"No nodes to delete\n";
		return;
	}
	if (position==1){
		if (last==last->getnext()){
			Node* p= last;
			cout<<p->getdata()<<"is deleted\n";
			delete p;
			last=NULL;
			return;
			}
			else {
				Node* p= last->getnext();
				last->setnext(p->getnext());
				cout<<p->getdata()<<"is deleted\n";
				delete p;
				return;
			}
	}
	if (position>1) {
		Node* p= last->getnext();
		int i=1;
		while (i<position-1){
			p=p->getnext();
			if (p->getnext()==last){
				break;
			}
			i++;
		}
		if (p->getnext()==last){
			Node* q= p->getnext();
			p->setnext(last->getnext());
			last=p;
			cout<<q->getdata()<<"is deleted\n";
			return;
		}
		Node* q= p->getnext();
		p->setnext(last);
		cout<<q->getdata()<<"is deleted\n";
		delete q;
		
	}
}

void CircularLinkedlist::display(){
	if(last==NULL){
		cout<<"No nodes to display\n";
	}
	else {
		Node* p= last->getnext();
		while(p!=last){
			cout<<p->getdata();
			cout<<"\n";
			p= p->getnext();
		}
		cout<<p->getdata();
		cout<<"\n";
	}
}
