#include"time.h"

namespace INDIA {
	
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
	}
	
}


