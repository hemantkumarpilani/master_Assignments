#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
void main (){
	struct date d;
	printf("Enter day, month and year \n");
	scanf("%d %d %d",&d.day,&d.month,&d.year);
	printf("Date is = %d-%d-%d \n",d.day,d.month,d.year);
}
