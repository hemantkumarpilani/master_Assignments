//Area and Perimeter of rectangle
#include<stdio.h.>
void area();
void perimeter();
void main(){
	area();
	printf("Area Of Rectangle is done \n");
	perimeter();
	printf("Perimeter Of Rectangle is done \n");
}
void area(){
	int length;
	int breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	int area;
	area= length*breadth;
	printf("Area of rectangle is %d \n", area);
}
void perimeter(){
	int length;
	int breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	int perimeter;
	perimeter= 2*(length+breadth);
	printf("Perimeter of rectangle is %d \n", perimeter);
}
