#include"mytime.h"

namespace USA {
	time::time(){
		hr=min=sec=0;
	}
	
	time::time(int hr, int min, int sec){
		this->hr= hr;
		this->min= min;
		this->sec= sec;
	}
	
	void time::display(){
		cout<<"\n"<<this->hr<<":"<<this->min<<":"<<this->sec;
		cout<<"\n";
	}
	
	time::time(time &t){
		cout<<"Copy constructor has called";
		this->hr= t.hr;
		this->min= t.min;
		this->sec= t.sec;
	}
	
}


