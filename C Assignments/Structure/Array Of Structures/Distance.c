#include<stdio.h>
typedef struct distance{
	float feet;
	float inch;
}dist;
void store_distance(dist*, int);
void display_distance(dist*, int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	dist d[n];
	store_distance(d,n);
	display_distance(d,n);
}
void store_distance(dist* d, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter distance in feet \n");
		scanf("%f",&d[i].feet);
		d[i].inch= d[i].feet*12;	
	}
}
void display_distance(dist* d, int n){
	int i;
	for(i=0;i<n;i++){
		printf("distance in feet is = %f feet \n",d[i].feet);
		printf("Distance conversion from feet to inches is = %f inch \n",d[i].inch);	
	}
}
