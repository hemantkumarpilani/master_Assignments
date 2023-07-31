//Area and Perimeter of rectangle
#include<stdio.h.>
int area(int,int);
int perimeter(int,int);
void main(){
	int length,breadth,area1,perimeter1;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	area1= area(length,breadth);
	printf("Area of rectangle is %d \n", area1);
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	perimeter1=perimeter(length,breadth);
	printf("Perimeter of rectangle is %d \n", perimeter1);
}
int area(int length, int breadth){
	int area;
	area= length*breadth;
	return area;
}
int perimeter(int length, int breadth){
	int perimeter;
	perimeter= 2*(length+breadth);
	return perimeter;
}
