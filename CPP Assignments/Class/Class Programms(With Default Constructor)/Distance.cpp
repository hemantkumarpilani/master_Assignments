#include<stdio.h>
class distance{
	float feet;
	float inch;
	
	public:
		
	distance(){
		this->feet=0;
		this->inch=0;
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
	distance d;
	float feet;
	float inch;
	printf("Enter feet:\n");
	scanf("%f",&feet);
	inch= inch= feet*12;
	d.setfeet(feet);
	d.setinch(inch);
	printf("distance in feet is = %f feet \n",d.getfeet());
	d.display_distance();
	return 0;
}
