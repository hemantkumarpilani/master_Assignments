//Area and perimeter of circle
#include<stdio.h>
void area (int);
void perimeter(int);
void main(){
	int r;
	printf("Enter radius \n");
	scanf("%d",&r);
	area(r);
	printf("Area Of Circle is done \n");
	printf("Enter radius \n");
	scanf("%d",&r);
	perimeter(r);
	printf("Perimeter Of Circle is done \n");
}
void area (int r){
	float pi= 3.14;
	float area;
	area= pi*r*r;
	printf("Area of circle is %f \n", area);
}
void perimeter (int r){
	float pi= 3.14;
	float perimeter;
	perimeter= 2*pi*r;
	printf("Perimeter of circle is %f \n", perimeter);
}
