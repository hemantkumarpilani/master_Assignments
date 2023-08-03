#include"time.h"

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
