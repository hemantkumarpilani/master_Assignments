#include<stdio.h>
struct time{
	int hour;
	int minute;
	int second;
	
	void sethour (int hour){
		this->hour= hour;
	}
	
	void setminute (int minute){
		this->minute= minute;
	}
	
	void setsecond (int second){
		this->second= second;
	}
	
	int gethour (){
		return this->hour;
	}
	
	int getminute (){
		return this->minute;
	}
	
	int getsecond (){
		return this->second;
	}
	
};
int main (){
	time t;
	int hour,minute,second;
	printf("Enter hour, minute and second \n");
	printf("Enter hour:\n");
	scanf("%d",&hour);
	printf("Enter minute:\n");
	scanf("%d",&minute);
	printf("Enter second:\n");
	scanf("%d",&second);
	t.sethour(hour);
	t.setminute(minute);
	t.setsecond(second);
	printf("Time is = %d:%d:%d \n",t.gethour(),t.getminute(),t.getsecond());
	return 0;
}
