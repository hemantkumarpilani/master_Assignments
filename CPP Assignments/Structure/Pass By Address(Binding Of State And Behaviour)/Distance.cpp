#include<stdio.h>
typedef struct distance{
	float feet;
	float inch;
	
	void store_distance(){
	printf("Enter distance in feet \n");
	scanf("%f",&feet);
	inch= feet*12;
	}

	void display_distance(){
	printf("distance in feet is = %f feet \n",feet);
	printf("Distance conversion from feet to inches is = %f inch \n",inch);
	}
}dist;
int main (){
	dist d;
	d.store_distance();
	d.display_distance();
	return 0;
}
