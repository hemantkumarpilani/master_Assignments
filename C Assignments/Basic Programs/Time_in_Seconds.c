//Convert time into seconds
#include<stdio.h>
struct time{
	int hour;
	int minute;
	int second;
};
void main (){
	struct time t;
	int seconds;
	printf("Enter hour, minute and second \n");
	scanf("%d %d %d",&t.hour,&t.minute,&t.second);
	printf("Time is = %d:%d:%d \n",t.hour,t.minute,t.second);
	seconds= (t.hour*60*60)+(t.minute*60)+t.second;
	printf("Printed time in seconds = %d \n",seconds);
}
