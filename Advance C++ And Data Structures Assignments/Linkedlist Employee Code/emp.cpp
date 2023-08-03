#include"emp.h"

emp::emp(){
	this->eid=0;
	strcpy(this->ename,"");
	this->basic=0;
}

emp::emp(int id, char* nm, double bsc){
	this->eid= id;
	strcpy(this->ename,nm);
	this->basic= bsc;
}

void emp::display(){
	cout<<"eid= "<<this->eid;
	cout<<"\nename= "<<this->ename;
	cout<<"\nbasic= "<<this->basic;
}
void emp::setid(int id){
	this->eid= id;
}
void emp:: setname(char* name){
	strcpy(this->ename,name);
}
void emp:: setbasic(double  basic){
	this->basic= basic;
}
int emp::getid(){
	return this->eid;
}
char* emp:: getname(){
	return this->ename;
}
double emp::getbasic(){
	return this->basic;
}

