#include<stdio.h>
typedef struct distance{
	float feet;
	float inch;
	
	void setfeet (int feet){
		this->feet= feet;
	}
	
	void setinch (int inch){
		inch= feet*12;
		this->inch= inch;
	}
	
	int getfeet (){
		return this->feet;
	}
	
	int getinch (){
		return this->inch;
	}
	
	void display_distance(){
	printf("distance in feet is = %f feet \n",feet);
	printf("Distance conversion from feet to inches is = %f inch \n",inch);
	}
}dist;
int main (){
	dist d;
	d.setfeet(12);
	d.setinch(0);
	d.display_distance();
	return 0;
}
