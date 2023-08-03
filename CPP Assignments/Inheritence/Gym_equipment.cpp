#include<iostream>
using namespace std;
#include<string.h>

class gym_equipment{
	char brand[20];
	int price;
	char colour[10];
	char width[10];
	char depth[10];
	char weight[10];
	
	public:
		gym_equipment(){
			cout<<"\nGym equipment default constructor called";
			strcpy(this->brand, "not given");
			this->price= 0;
			strcpy(this->colour, "not given");
			strcpy(this->width, "not given");
			strcpy(this->depth, "not given");
			strcpy(this->weight, "not given");
		}
		
		gym_equipment(char* brand, int price, char* colour, char* width, char* depth, char* weight){
			cout<<"\nGym equipment parameterised constructor called";
			strcpy(this->brand,brand);
			this->price= price;
			strcpy(this->colour,colour);
			strcpy(this->width,width);
			strcpy(this->depth,depth);
			strcpy(this->weight,weight);
		}
		
		void setbrand(char* brand){
			strcpy(this->brand, brand);
		}
		
		void setprice(int price){
			this->price= price;
		}
		
		void setcolour(char* colour){
			strcpy(this->colour, colour);
		}
		
		void setwidth(char* width){
			strcpy(this->width, width);
		}
		
		void setdepth(char* depth){
			strcpy(this->depth, depth);
		}
		
		void setweight(char* weight){
			strcpy(this->weight, weight);
		}
		
		char* getbrand(){
			return this->brand;
		}
		
		int getprice(){
			return this->price;
		}
		
		char* getcolour(){
			return this->colour;
		}
		
		char* getwidth(){
			return this->width;
		}
		
		char* getdepth(){
			return this->depth;
		}
		
		char* getweight(){
			return this->weight;
		}
		
		void display(){
			cout<<"\nBrand : "<<this->brand;
			cout<<"\nPrice : "<<this->price;
			cout<<"\nColour : "<<this->colour;
			cout<<"\nWidth : "<<this->width;
			cout<<"\nDepth : "<<this->depth;
			cout<<"\nWeight : "<<this->weight;
		}
	
};// class gym_equipment ends here


class rowing_machine : public gym_equipment {
	char resistance_type[20];
	char monorail_material[10];
	int resistance_level;
	
	public:
		
		rowing_machine() : gym_equipment(){
			cout<<"\nRowing machine default constructor called";
			strcpy(this->resistance_type, "not given");
			strcpy(this->monorail_material, "not given");
			this->resistance_level= 0;
		}
		
		rowing_machine (char* brand, int price, char* colour, char* width, char* depth, char* weight, char *r, char* m, int res_lvl):gym_equipment(brand,price,colour,width,depth,weight){
				cout<<"\nRowing machine parameterised constructor called";
				cout<<"\n\n";
				strcpy(this->resistance_type,r);
				strcpy(this->monorail_material,m);
				this->resistance_level= res_lvl;			
		}
		
		void setresistance_type (char *r){
			strcpy(this->resistance_type,r);
		}
		
		void setmonorail_material(char* m){
			strcpy(this->monorail_material,m);
		}
		
		void setresistance_level(int res_lvl){
			this->resistance_level= res_lvl;
		}
		
		char* getresistance_type(){
			return this->resistance_type;
		}
		
		char* getmonorail_material(){
			return this->getmonorail_material();
		}
		
		int getresistance_level(){
			return this->resistance_level;
		}
		
		void display(){
			cout<<"\nRowing machine details :";
			gym_equipment :: display();
			cout<<"\nResistance level : "<<this->resistance_level;
			cout<<"\nResistance type : "<<this->resistance_type;
			cout<<"\nMonorail Material : "<<this->monorail_material;
			cout<<"\n\n";
		}
}; // class rowing_machine ends here 


class tredmill : public gym_equipment {
	int inclination_level;
	char speed[10];
	char continous_motor_power[10];
	char peak_motor_power[10];
	
	public:
		
		tredmill(){
			cout<<"\nTredmill default constructor called";
			strcpy(this->speed, "not given");
			strcpy(this->continous_motor_power, "not given");
			strcpy(this->peak_motor_power, "not given");
			this->inclination_level= 0;
		}
		
		tredmill(char* brand, int price, char* colour, char* width, char* depth, char* weight, char *s, char* c, char* p, int i) : gym_equipment(brand,price,colour,width,depth,weight){
			cout<<"\nTredmill parameterised constructor called";
			cout<<"\n\n";
			strcpy(this->speed,s);
			this->inclination_level=i;
			strcpy(this->continous_motor_power,c);			
			strcpy(this->peak_motor_power,p);
			
		}
		
		void setinclination_level(int i){
			this->inclination_level= i;
		}
		
		void setspeed(char* s){
			strcpy(this->speed,s);
		}
		
		void setcontinous_motor_power(char* c){
			strcpy(this->continous_motor_power,c);
		}
		
		void setpeak_motor_power(char* p){
			strcpy(this->peak_motor_power,p);
		}
		
		int getsetinclination_level(){
			return this->inclination_level;
		}
		
		char* getspeed(){
			return this->speed;
		}
		
		char* getcontinous_motor_power(){
			return this->continous_motor_power;
		}
		
		char* getpeak_motor_power(){
			return this->peak_motor_power;
		}
		
		void display(){
			cout<<"\nTredmill details :";
			gym_equipment::display();
			cout<<"\nInclination level : "<<this->inclination_level;
			cout<<"\nSpeed : "<<this->speed;
			cout<<"\nContinous motor power : "<<this->continous_motor_power;
			cout<<"\nPeak motor power : "<<this->peak_motor_power;
			cout<<"\n\n";
		}
}; // class tredmill ends here;

class airbike : public gym_equipment{
	int no_of_batteries;
	char assembly_time[10];
	
	public:
		
		airbike(){
			cout<<"\nAirbike default constructor called";
			strcpy(this->assembly_time, "not given");
			this->no_of_batteries= 0;
		}
		
		airbike(char* brand, int price, char* colour, char* width, char* depth, char* weight, char *a, int n) : gym_equipment(brand,price,colour,width,depth,weight){
			cout<<"\nAirbike parameterised constructor called";
			cout<<"\n\n";
			strcpy(this->assembly_time,a);
			this->no_of_batteries,n;
			
		}
		
		void setno_of_batteries(int n){
			this->no_of_batteries= n;
		}
		
		void setassembly_time(char* a){
			strcpy(this->assembly_time,a);
		}
		
		int getno_of_batteries(){
			return this->no_of_batteries;
		}
		
		char* getassembly_time(){
			return this->assembly_time;
		}
		
		void display(){
			cout<<"\nAirbike details :";
			gym_equipment::display();
			cout<<"\nNo. of batteries : "<<this->no_of_batteries;
			cout<<"\nAssembly time : "<<this->assembly_time;
			cout<<"\n\n";
		}
};

int main (){
	rowing_machine r1 ("Durafit",19000,"Black","23cm","58cm","27kg","Magnetic Resistance","Steel",10);
	r1.display();
	
	tredmill t1 ("Aerofit",67000,"Black","87cm","193cm","80kg","1-16 Km/hr","3hp","6hp",15);
	t1.display();
	
	airbike a1 ("RPM fitness",6000,"Black","25.59inch","41.33inch","16.7kg","30 minutes",2);
	a1.display();
	return 0;
}

