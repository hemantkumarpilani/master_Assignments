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
	
	time(int hour, int minute, int second){
		this->hour= hour;
		this->minute= minute;
		this->second= second;
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
	time t1 (3,45,55);
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
	printf("1st Clock 's Time is = %d:%d:%d \n",t.gethour(),t.getminute(),t.getsecond());
	printf("2nd Clock 's Time is = %d:%d:%d \n",t1.gethour(),t1.getminute(),t1.getsecond());
	return 0;
}
