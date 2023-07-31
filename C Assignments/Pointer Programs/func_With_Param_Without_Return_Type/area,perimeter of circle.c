//Area and perimeter of circle
#include<stdio.h>
void area (int*);
void perimeter(int*);
void main(){
	int radius;
	printf("Enter radius \n");
	scanf("%d",&radius);
	area(&radius);
	printf("Area Of Circle is done \n");
	printf("Enter radius \n");
	scanf("%d",&radius);
	perimeter(&radius);
	printf("Perimeter Of Circle is done \n");
}
void area (int* radius){
	int r;
	float pi= 3.14;
	float area;
	r= *radius;
	area= pi*r*r;
	printf("Area of circle is %f \n", area);
}
void perimeter (int* radius){
	int r;
	float pi= 3.14;
	float perimeter;
	r= *radius;
	perimeter= 2*pi*r;
	printf("Perimeter of circle is %f \n", perimeter);
}
