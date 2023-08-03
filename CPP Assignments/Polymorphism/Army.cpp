#include<iostream>
using namespace std;
#include<string.h>

class armed_force {
	char country [20];
	char founded [20];
	char type [30];
	char role [10];
	char size [50];
	char part_of [30];
	char headquaters [20];
	char mottos [30];
	char anniversary [30];
	
	public:
		
		armed_force (char* c, char* f, char* t, char* r, char* s, char* p, char* h, char* m, char* a){
			strcpy(this->country,c);
			strcpy(this->founded,f);
			strcpy(this->type,t);
			strcpy(this->role,r);
			strcpy(this->size,s);
			strcpy(this->part_of,p);
			strcpy(this->headquaters,h);
			strcpy(this->mottos,m);
			strcpy(this->anniversary,a);
		}
		
		virtual void display(){
			cout<<"\nCountry : " <<this->country;
			cout<<"\nFounded : " <<this->founded;
			cout<<"\nType : " <<this->type;
			cout<<"\nRole : " <<this->role;
			cout<<"\nSize : " <<this->size;
			cout<<"\nPart of : " <<this->part_of;
			cout<<"\nHeadquaters : " <<this->headquaters;
			cout<<"\nMottos : " <<this->mottos;
			cout<<"\nAnniversary : " <<this->anniversary;
			cout<<"\nEnsure national security and national unity";
		}
};// class armed forces ends here

class army : public armed_force {
	
	public :
		
		army (char* c, char* f, char* t, char* r, char* s, char* p, char* h, char* m, char* a):armed_force(c,f,t, r,s,p,h,m,a){
			
		}
		void display(){
			cout<<"\nArmy details : ";
			armed_force::display();
			cout<<"\nArmy fights on earth";
			cout<<"\n\n";
		}
};// class army ends here

class navy : public armed_force {
	
	public:
		
		navy (char* c, char* f, char* t, char* r, char* s, char* p, char* h, char* m, char* a):armed_force (c,f,t, r,s,p,h,m,a){
			
		}
		
		void display(){
			cout<<"\nNavy details : ";
			armed_force::display();
			cout<<"\nNavy fights in the water";
			cout<<"\n\n";
		}
};// class navy ends here 

class air_force : public armed_force {
	
	public:
		
		air_force (char* c, char* f, char* t, char* r, char* s, char* p, char* h, char* m, char* a):armed_force(c,f,t, r,s,p,h,m,a){
			
		}
		
		void display(){
			cout<<"\nAir Force details : ";
			armed_force::display();
			cout<<"\nAir force fights in the sky";
			cout<<'\n';
		}
};
int main (){
	armed_force* am1;
	
	army a1("India","26 January 1950","Army","Land warfare","123117 active personnel","Indian Armed Forces","New Delhi","Seva Paramo Dharma","15 January");
	am1= &a1;
	am1->display();
	
	navy n1("India","26 January 1950","Blue water navy","Naval warfare","67,252 active personnel","Indian Armed Forces","New Delhi","Sham No Varunah","4 December");
	am1= &n1;
	am1->display();
		
 	air_force ar1("India","26 January 1950","Air Force","Aerial warfare","170,576 active personnel","Indian Armed Forces","New Delhi","Nabhah Sprsam Diptam","8 October");
 	am1= &ar1;
 	am1->display();
 	
 	return 0;
}


