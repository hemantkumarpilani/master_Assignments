#include<stdio.h>
class distance{
	float feet;
	float inch;
	
	public:
		
	distance(){
		this->feet=0;
		this->inch=0;
	}
	
	distance(float feet, float inch){
		this->feet= feet;
		this->inch= inch;
	}
	
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
	
	void display_distance(){
	printf("distance in feet is = %f feet \n",feet);
	printf("Distance conversion from feet to inches is = %f inch \n",inch);
	}
	
};
int main (){
	distance d,d1(2,24);
	float feet;
	float inch;
	printf("Enter feet:\n");
	scanf("%f",&feet);
	inch= inch= feet*12;
	d.setfeet(feet);
	d.setinch(inch);
	d.display_distance();
	d1.display_distance();
	return 0;
}
//	printf("1st distance in feet is = %f feet \n",d.getfeet());
//	printf("1st distance conversion from feet to inches is = %f inch \n",d.getinch());
//	printf("2nd distance in feet is = %f feet \n",d1.getfeet());
//	printf("2nd distance conversion from feet to inches is = %f inch \n",d1.getinch());
