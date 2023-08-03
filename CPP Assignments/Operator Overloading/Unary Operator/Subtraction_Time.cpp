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
	
	time operator--(){
		time temp;
		temp.hour= --this->hour;
		temp.minute= --this->minute;
		temp.second= --this->second;
		temp= normalise_time(temp);
		return temp;
	}
	
	time normalise_time(time temp){
		if (temp.minute<0){
			temp.minute= temp.minute+60;
		}
		
		if (temp.second<0){
			temp.second= temp.second+60;
		}
		return temp;
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
	t1= --t;
	t1.display_time();
	return 0;
}
