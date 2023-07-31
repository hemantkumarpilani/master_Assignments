//Area and perimeter of circle
#include<stdio.h>
void main(){
	int r;
	float pi= 3.14;
	int area,perimeter;
	printf("Enter radius \n");
	scanf("%d",&r);
	area= pi*r*r;
	perimeter= 2*pi*r;
	printf("Area of circle is %d \n", area);
	printf("Perimeter of circle is %d \n", perimeter);
}
