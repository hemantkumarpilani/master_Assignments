//Area and perimeter of circle
#include<stdio.h>
float area ();
float perimeter();
void main(){
	float a,b;
	a=area();
	printf("Area of circle is %f \n", a);
	b=perimeter();
	printf("Perimeter of circle is %f \n",b);
}
float area (){
	int r;
	float pi= 3.14;
	float area;
	printf("Enter radius \n");
	scanf("%d",&r);
	area= pi*r*r;
	return area;
}
float perimeter (){
	int r;
	float pi= 3.14;
	float perimeter;
	printf("Enter radius \n");
	scanf("%d",&r);
	perimeter= 2*pi*r;
	return perimeter;
}
