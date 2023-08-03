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
	
	void display_date(){
	printf("Date is = %d-%d-%d \n",day,month,year);
	}
	
};
int main (){
	int dt,m,y;
	date d,d1(9,12,1994);
	printf("Enter date:\n");
	scanf("%d",&dt);
	printf("Enter month:\n");
	scanf("%d",&m);
	printf("Enter year:\n");
	scanf("%d",&y);
	d.setday(dt);
	d.setmonth(m);
	d.setyear(y);
	printf("1st Date is = %d-%d-%d \n",d.getday(),d.getmonth(),d.getyear());
	printf("2nd Date is = %d-%d-%d \n",d1.getday(),d1.getmonth(),d1.getyear());
	return 0;
}

