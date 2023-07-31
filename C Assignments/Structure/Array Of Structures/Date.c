#include<stdio.h>
typedef struct date{
	int day;
	int month;
	int year;
}date;
void store_date(date*,int);
void display_date(date*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	date d[n];
	store_date(d,n);
	display_date(d,n);
}
void store_date(date* d, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter day, month and year \n");
		scanf("%d %d %d",&d[i].day,&d[i].month,&d[i].year);	
	}
}
void display_date(date* d, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Date is = %d-%d-%d \n",d[i].day,d[i].month,d[i].year);	
	}
}

