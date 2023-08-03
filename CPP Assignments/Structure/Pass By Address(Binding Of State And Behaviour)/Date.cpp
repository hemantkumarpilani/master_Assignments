#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
	
	void store_date(){
	printf("Enter day, month and year \n");
	scanf("%d %d %d",&day,&month,&year);
	}
	
	void display_date(){
	printf("Date is = %d-%d-%d \n",day,month,year);
	}
};
int main (){
	date d;
	d.store_date();
	d.display_date();
	return 0;
}

