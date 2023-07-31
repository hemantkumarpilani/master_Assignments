//Area and Perimeter of rectangle
#include<stdio.h.>
void area(int*,int*);
void perimeter(int*,int*);
void main(){
	int length,breadth;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	area(&length,&breadth);
	printf("Area Of Rectangle is done \n");
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	perimeter(&length,&breadth);
	printf("Perimeter Of Rectangle is done \n");
}
void area(int* length, int* breadth){
	int l,b,area;
	l= *length;
	b= *breadth;
	area= l*b;
	printf("Area of rectangle is %d \n", area);
}
void perimeter(int* length, int* breadth){
	int l,b,perimeter;
	l= *length;
	b= *breadth;
	perimeter= 2*(l+b);
	printf("Perimeter of rectangle is %d \n", perimeter);
}
