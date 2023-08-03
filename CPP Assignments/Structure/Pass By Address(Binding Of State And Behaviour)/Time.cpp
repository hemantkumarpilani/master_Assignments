#include<stdio.h>
struct time{
	int hour;
	int minute;
	int second;
	
	void store_time(){
	printf("Enter hour, minute and second \n");
	scanf("%d %d %d",&hour,&minute,&second);
	}
	void display_time(){
	printf("Time is = %d:%d:%d \n",hour,minute,second);
	}
	
};
int main (){
	time t;
	t.store_time();
	t.display_time();
	return 0;
}
