#include"date.h"

int main (){
	int dt,m,y;
	
	date d,d1(9,12,1994);
	
	cout<<"Enter date:\n";
	cin>>dt;
	cout<<"Enter month:\n";
	cin>>m;
	cout<<"Enter year:\n";
	cin>>y;
	
	d.setday(dt);
	d.setmonth(m);
	d.setyear(y);
	
	d.display();
	d1.display();
	
	return 0;
}

