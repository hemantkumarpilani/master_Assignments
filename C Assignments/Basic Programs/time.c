#include<stdio.h>
struct time{
	int hour;
	int minute;
	int second;
};
void main (){
	struct time t;
	printf("Enter hour, minute and second \n");
	scanf("%d %d %d",&t.hour,&t.minute,&t.second);
	printf("Time is = %d:%d:%d \n",t.hour,t.minute,t.second);
}
