//Area and Perimeter of rectangle
#include<stdio.h.>
int area(int*,int*);
int perimeter(int*,int*);
void main(){
	int length,breadth,a,p;
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	a= area(&length,&breadth);
	printf("Area of rectangle is %d \n", a);
	printf("Enter length \n");
	scanf("%d",&length);
	printf("Enter breadth \n");
	scanf("%d",&breadth);
	p= perimeter(&length,&breadth);
	printf("Perimeter of rectangle is %d \n", p);
}
int area(int* length, int* breadth){
	int l,b,area;
	l= *length;
	b= *breadth;
	area= l*b;
	return area;
}
int perimeter(int* length, int* breadth){
	int l,b,perimeter;
	l= *length;
	b= *breadth;
	perimeter= 2*(l+b);
	return perimeter;
}
