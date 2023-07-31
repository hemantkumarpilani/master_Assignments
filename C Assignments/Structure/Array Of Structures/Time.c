#include<stdio.h>
typedef struct time{
	int hour;
	int minute;
	int second;
}time;
void store_time(time*,int);
void display_time(time*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	time t[n];
	store_time(t,n);
	display_time(t,n);
}
void store_time(time* t, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter hour, minute and second \n");
		scanf("%d %d %d",&t[i].hour,&t[i].minute,&t[i].second);	
	}
}
void display_time(time* t, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Time is = %d:%d:%d \n",t[i].hour,t[i].minute,t[i].second);	
	}
}
