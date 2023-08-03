#include"time.h"

	time::time (){
		this->hour=0;
		this->minute=0;
		this->second=0;
	}
	
	time::time(int hour, int minute, int second){
		this->hour= hour;
		this->minute= minute;
		this->second= second;
	}
	
	void time:: sethour (int hour){
		this->hour= hour;
	}
	
	void time:: setminute (int minute){
		this->minute= minute;
	}
	
	void time:: setsecond (int second){
		this->second= second;
	}
	
	int time:: gethour (){
		return this->hour;
	}
	
	int time:: getminute (){
		return this->minute;
	}
	
	int time:: getsecond (){
		return this->second;
	}
	
	void time:: display(){
	cout<<"Time is "<<hour<<":"<<minute<<":"<<second<<endl;
	cout<<"\n\n";
	}
