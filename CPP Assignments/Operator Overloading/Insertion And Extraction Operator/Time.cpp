#include<iostream>
using namespace std;
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
	
	void display(){
	cout<<"Time is "<<hour<<":"<<minute<<":"<<second<<endl;
	cout<<"\n\n";
	}
	
};
int main (){
	time t;
	time t1 (3,45,55);
	
	int hour,minute,second;
	
	cout<<"Enter hour, minute and second\n";
	cout<<"Enter hour:\n";
	cin>>hour;
	cout<<"Enter minute:\n";
	cin>>minute;
	cout<<"Enter second:\n";
	cin>>second;
	
	t.sethour(hour);
	t.setminute(minute);
	t.setsecond(second);
	
	t.display();
	t1.display();
	return 0;
}
