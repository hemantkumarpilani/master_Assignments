#include<stdio.h>
typedef struct date{
	int day;
	int month;
	int year;
}date;
void store_date(date*);
void display_date(date*);
void main (){
	date d;
	store_date(&d);
	display_date(&d);
}
void store_date(date* d){
	printf("Enter day, month and year \n");
	scanf("%d %d %d",&d->day,&d->month,&d->year);
}
void display_date(date* d){
	printf("Date is = %d-%d-%d \n",d->day,d->month,d->year);
}

