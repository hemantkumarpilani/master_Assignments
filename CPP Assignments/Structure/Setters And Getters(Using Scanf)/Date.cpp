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
	
};
int main (){
	int dt,m,y;
	date d;
	printf("Enter date:\n");
	scanf("%d",&dt);
	printf("Enter month:\n");
	scanf("%d",&m);
	printf("Enter year:\n");
	scanf("%d",&y);
	d.setday(dt);
	d.setmonth(m);
	d.setyear(y);
	printf("Date is = %d-%d-%d \n",d.getday(),d.getmonth(),d.getyear());
	return 0;
}

