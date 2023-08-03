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
	
	void display_time(){
	printf("Time is = %d:%d:%d \n",hour,minute,second);
	}
	
};
int main (){
	time t;
	t.sethour(06);
	t.setminute(02);
	t.setsecond(25);
	t.display_time();
	return 0;
}
