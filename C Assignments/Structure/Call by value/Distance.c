#include<stdio.h>
typedef struct distance{
	float feet;
	float inch;
}dist;
dist store_distance(dist);
void display_distance(dist);
void main (){
	dist d;
	d= store_distance(d);
	display_distance(d);
}
dist store_distance(dist d){
	printf("Enter distance in feet \n");
	scanf("%f",&d.feet);
	d.inch= d.feet*12;
	return d;
}
void display_distance(dist d){
	printf("distance in feet is = %f feet \n",d.feet);
	printf("Distance conversion from feet to inches is = %f inch \n",d.inch);
}
