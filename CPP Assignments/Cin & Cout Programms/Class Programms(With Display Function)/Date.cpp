#include<iostream>
using namespace std;
class date{
	int day;
	int month;
	int year;
	
	public:
		
	date (){
		this->day=0;
		this->month=0;
		this->year=0000;
	}
	
	date(int day, int month, int year){
		this->day= day;
		this->month= month;
		this->year= year;
	}
	
	void setday (int day){
		this->day= day;
	}
	
	void setmonth (int month){
		this->month= month;
	}
	
	void setyear (int year){
		this->year= year;
	}
	
	int getday (){
		return this->day;
	}
	
	int getmonth (){
		return this->month;
	}
	
	int getyear (){
		return this->year;
	}
	
	void display(){
	cout<<"\nDate is = "<<day<<"-"<<month<<"-"<<year;
	cout<<"\n\n";
	}
	
};
int main (){
	int dt,m,y;
	
	date d,d1(9,12,1994);
	
	cout<<"Enter date:\n";
	cin>>dt;
	cout<<"Enter month:\n";
	cin>>m;
	cout<<"Enter year:\n";
	cin>>y;
	
	d.setday(dt);
	d.setmonth(m);
	d.setyear(y);
	
	d.display();
	d1.display();
	
	return 0;
}

