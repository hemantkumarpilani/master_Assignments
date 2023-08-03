#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
	
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
	
	void display_date(){
	printf("Date is = %d-%d-%d \n",day,month,year);
	}
};
int main (){
	date d;
	d.setday(16);
	d.setmonth(07);
	d.setyear(1998);
	d.display_date();
	return 0;
}

