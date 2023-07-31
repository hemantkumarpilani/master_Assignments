#include<stdio.h>
typedef struct time{
	int hour;
	int minute;
	int second;
}time;
time store_time(time);
void display_time(time);
void main (){
	time t;
	t= store_time(t);
	display_time(t);
}
time store_time(time t){
	printf("Enter hour, minute and second \n");
	scanf("%d %d %d",&t.hour,&t.minute,&t.second);
	return t;
}
void display_time(time t){
	printf("Time is = %d:%d:%d \n",t.hour,t.minute,t.second);
}
