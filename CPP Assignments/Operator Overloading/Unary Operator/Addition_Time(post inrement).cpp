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
	
	void operator++(int a){
		this->hour++;
		this->minute++;
		this->second++;
		
		if(this->minute>=60){
			this->hour= this->minute/60+this->hour;
			this->minute= this->minute%60;
		}
		
		if (this->second>=60){
			this->minute= this->second/60+this->minute;
			this->second= this->second%60;
		}
	}
	
	
	void display_time(){
	printf("Time is = %d:%d:%d \n",hour,minute,second);
	}
	
};
int main (){
	time t,t1,t2;
	int h,m,s;
	printf("Enter time:\n");
	printf("Enter hour:\n");
	scanf("%d",&h);
	printf("Enter minute:\n");
	scanf("%d",&m);
	printf("Enter Second:\n");
	scanf("%d",&s);
	t.sethour(h);
	t.setminute(m);
	t.setsecond(s);
	t++;
	t.display_time();
	return 0;
}
