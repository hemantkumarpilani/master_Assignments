//Area and Perimeter of rectangle
#include<stdio.h.>
int area();
int perimeter();
void main(){
	int a,b;
	a=area();
	printf("Area of rectangle is %d \n", a);
	b=perimeter();
	printf("Perimeter of rectangle is %d \n", b);
}
int area(){
	int length;
	int breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	int area;
	area= length*breadth;
	return area;
}
int perimeter(){
	int length;
	int breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	int perimeter;
	perimeter= 2*(length+breadth);
	return perimeter;
}
