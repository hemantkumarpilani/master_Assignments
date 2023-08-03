#include"date.h"

	date::date(){
		this->day=0;
		this->month=0;
		this->year=0000;
	}
	
	date::date(int day, int month, int year){
		this->day= day;
		this->month= month;
		this->year= year;
	}
	
	void date:: setday (int day){
		this->day= day;
	}
	
	void date:: setmonth (int month){
		this->month= month;
	}
	
	void date:: setyear (int year){
		this->year= year;
	}
	
	int date:: getday (){
		return this->day;
	}
	
	int date::getmonth (){
		return this->month;
	}
	
	int date:: getyear (){
		return this->year;
	}
	
	void date:: display(){
	cout<<"\nDate is = "<<day<<"-"<<month<<"-"<<year;
	cout<<"\n\n";
	}
