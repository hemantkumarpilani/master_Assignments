//Area and Perimeter of rectangle
#include<stdio.h.>
void main(){
	int length;
	int breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	int area,perimeter;
	area= length*breadth;
	perimeter= 2*(length+breadth);
	printf("Area of rectangle is %d \n", area);
	printf("Perimeter of rectangle is %d \n", perimeter);
}
