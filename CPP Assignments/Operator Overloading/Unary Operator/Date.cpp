#include<stdio.h>
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
	
	date operator++(int a){
		date temp;
		temp.day= this->day++;
		temp.month= this->month++;
		temp.year= this->year++;
		return temp;
	}
	
	date operator++(){
		date temp;
		temp.day= ++this->day;
		temp.month= ++this->month;
		temp.year= ++this->year;
		return temp;
	}
	
	void display_date(){
	printf("Date is = %d-%d-%d \n",day,month,year);
	}
	
};
int main (){
	int dt,m,y;
	date d,d1,d2;
	printf("Enter date:\n");
	scanf("%d",&dt);
	printf("Enter month:\n");
	scanf("%d",&m);
	printf("Enter year:\n");
	scanf("%d",&y);
	d.setday(dt);
	d.setmonth(m);
	d.setyear(y);
	
	d1= d++;
	d.display_date();
	d1.display_date();
	
	d2= ++d;
	d.display_date();
	d2.display_date();
	return 0;
}

