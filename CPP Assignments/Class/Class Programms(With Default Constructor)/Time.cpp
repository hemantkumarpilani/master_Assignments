#include<stdio.h>
class time{
	int hour;
	int minute;
	int second;
	
	public:
		
	time (){
		this->hour=0;
		this->minute=0;
		this->second=0;
	}
	
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
	
	void display_time(){
	printf("Time is = %d:%d:%d \n",hour,minute,second);
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
	t.display_time();
	return 0;
}
