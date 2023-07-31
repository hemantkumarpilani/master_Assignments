#include<stdio.h>
typedef struct distance{
	float feet;
	float inch;
}dist;
void store_distance(dist*);
void display_distance(dist*);
void main (){
	dist d;
	store_distance(&d);
	display_distance(&d);
}
void store_distance(dist* d){
	printf("Enter distance in feet \n");
	scanf("%f",&d->feet);
	d->inch= d->feet*12;
}
void display_distance(dist* d){
	printf("distance in feet is = %f feet \n",d->feet);
	printf("Distance conversion from feet to inches is = %f inch \n",d->inch);
}
