//Area and perimeter of circle
#include<stdio.h>
void area ();
void perimeter();
void main(){
	area();
	printf("Area Of Circle is done \n");
	perimeter();
	printf("Perimeter Of Circle is done \n");
}
void area (){
	int r;
	float pi= 3.14;
	float area;
	printf("Enter radius \n");
	scanf("%d",&r);
	area= pi*r*r;
	printf("Area of circle is %f \n", area);
}
void perimeter (){
	int r;
	float pi= 3.14;
	float perimeter;
	printf("Enter radius \n");
	scanf("%d",&r);
	perimeter= 2*pi*r;
	printf("Perimeter of circle is %f \n", perimeter);
}
