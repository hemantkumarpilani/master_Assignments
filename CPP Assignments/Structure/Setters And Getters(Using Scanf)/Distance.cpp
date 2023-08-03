#include<stdio.h>
typedef struct distance{
	float feet;
	float inch;
	
	void setfeet (float feet){
		this->feet= feet;
	}
	
	void setinch (float inch){
		this->inch= inch;
	}
	
	float getfeet (){
		return this->feet;
	}
	
	float getinch (){
		return this->inch;
	}
	
}dist;
int main (){
	dist d;
	float feet;
	float inch;
	printf("Enter feet:\n");
	scanf("%f",&feet);
	inch= inch= feet*12;
	d.setfeet(feet);
	d.setinch(inch);
	printf("distance in feet is = %f feet \n",d.getfeet());
	printf("Distance conversion from feet to inches is = %f inch \n",d.getinch());
	return 0;
}
