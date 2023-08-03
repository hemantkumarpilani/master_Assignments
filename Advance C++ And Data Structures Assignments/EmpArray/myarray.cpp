#include"myarray.h"

myarray::myarray(int s){
	this->size= s;
	this->index= -1;
	pemp= new emp[this->size];
}

myarray::~myarray(){
	cout<<"Destructor has called";
	delete [] this->pemp;
}

void myarray::addemp(emp& t){
	// check for full condition
	if (this->index== this->size-1){
		cout<<"Array is full\n";
		return;
	}
	else {
		this->index++;
		this->pemp[this->index]= t;
	}
}
	
void myarray::display(){
	if (this->index==-1){
		cout<<"No elements to display\n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			this->pemp[i].display();
			cout<<"\n";
		}
	}
}

void myarray::searchbyID(int id){
	if (this->index==-1){
		cout<<"No elements to search\n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			if (this->pemp[i].getid()==id){
				cout<<"Emp found\n";
				this->pemp[i].display();
				return;	
			}
		}
	}
	cout<<"Record not found\n";
}

void myarray::searchbyName(char* name){
	if (this->index==-1){
		cout<<"No elements to search\n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			if (strcmp(this->pemp[i].getname(),name)==0){
				cout<<"Emp found\n";
				this->pemp[i].display();
				return;	
			}
		}
	}
	cout<<"Record not found\n";
}

void myarray::editbyid(int id){
	if (this->index==-1){
		cout<<"No elements to edit\n";
		return;
	}
	else {
		for (int i=0; i<=this->index; i++){
			if (this->pemp[i].getid()==id){
				cout<<"Emp found\n";
				char ans;
				cout<<"Do you wish to change name\n";
				cin>>ans;
				if ((ans=='Y')||(ans='y')){
					char name[20];
					cout<<"Enter new name\n";
					cin>>name;
					this->pemp[i].setname(name);
				}
				cout<<"Do you wish to change basic\n";
				cin>>ans;
				if ((ans=='Y')||(ans='y')){
					double basic;
					cout<<"Enter new basic\n";
					cin>>basic;
					this->pemp[i].setbasic(basic);
				}
				return;
			}
		}
	}
	cout<<"Record not found\n";
}

void myarray::deletebyid(int id){
	if (this->index==-1){
		cout<<"No elements to delete\n";
		return;
	}
	else {
		int i;
		bool found= false;
		for(i=0;i<=this->index;i++){
			if (this->pemp[i].getid()==id){
				found=true;
				break;
			}
		}
		if (found){
			while (i<this->index){
				this->pemp[i]= this->pemp[i+1];
				i++;
			}
			index--;
		}
		else {
			cout<<"Record not found\n";		
		}
	}
}
