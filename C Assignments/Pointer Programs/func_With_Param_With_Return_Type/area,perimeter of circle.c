//Area and perimeter of circle
#include<stdio.h>
float area (int*);
float perimeter(int*);
void main(){
	int radius;
	float a,b;
	printf("Enter radius \n");
	scanf("%d",&radius);
	a= area(&radius);
	printf("Area of circle is %f \n", a);
	printf("Enter radius \n");
	scanf("%d",&radius);
	b= perimeter(&radius);
	printf("Perimeter of circle is %f \n", b);
}
float area (int* radius){
	int r;
	float pi= 3.14;
	float area;
	r= *radius;
	area= pi*r*r;
	return area;
}
float perimeter (int* radius){
	int r;
	float pi= 3.14;
	float perimeter;
	r= *radius;
	perimeter= 2*pi*r;
	return perimeter;
}
