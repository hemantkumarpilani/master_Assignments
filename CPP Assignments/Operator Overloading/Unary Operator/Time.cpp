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
	
	time operator++(int a){
		time temp;
		temp.hour= this->hour++;
		temp.minute= this->minute++;
		temp.second= this->second++;
		return temp;
	}
	
	time operator++(){
		time temp;
		temp.hour= ++this->hour;
		temp.minute= ++this->minute;
		temp.second= ++this->second;
		return temp;
	}
	
	void display_time(){
	printf("Time is = %d:%d:%d \n",hour,minute,second);
	}
	
};
int main (){
	time t(5,45,45),t1,t2;
	t1= t++;
	t.display_time();
	t1.display_time();
	
	t2= ++t;
	t.display_time();
	t2.display_time();
	
	return 0;
}
