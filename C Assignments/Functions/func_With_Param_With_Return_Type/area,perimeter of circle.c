//Area and perimeter of circle
#include<stdio.h>
float area (int);
float perimeter(int);
void main(){
	int r;
	float area1,perimeter1;
	printf("Enter radius \n");
	scanf("%d",&r);
	area1= area(r);
	printf("Area of circle is %f \n", area1);
	printf("Enter radius \n");
	scanf("%d",&r);
	perimeter1= perimeter(r);
	printf("Perimeter of circle is %f \n", perimeter1);
}
float area (int r){
	float pi= 3.14;
	float area;
	area= pi*r*r;
	return area;
}
float perimeter (int r){
	float pi= 3.14;
	float perimeter;
	perimeter= 2*pi*r;
	return perimeter;
}
