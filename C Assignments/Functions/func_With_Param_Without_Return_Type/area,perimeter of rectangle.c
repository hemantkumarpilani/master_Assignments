//Area and Perimeter of rectangle
#include<stdio.h.>
void area(int,int);
void perimeter();
void main(){
	int length,breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	area(length,breadth);
	printf("Area Of Rectangle is done \n");
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	perimeter(length,breadth);
	printf("Perimeter Of Rectangle is done \n");
}
void area(int length, int breadth){
	int area;
	area= length*breadth;
	printf("Area of rectangle is %d \n", area);
}
void perimeter(int length, int breadth){
	int perimeter;
	perimeter= 2*(length+breadth);
	printf("Perimeter of rectangle is %d \n", perimeter);
}
