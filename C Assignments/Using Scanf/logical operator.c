//logical operators
#include<stdio.h>
void main(){
	int a;
	int b;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	int c,d,e,f,g;
	c= a && b;
	printf("The value of c after AND operator is = %d \n",c);
	d= a || b;
	d= printf("The value of d after OR operator is %d \n", d);
	e= a-- && b++;
	printf("The value of e is %d \n ", e);
	printf("The value of a and b is %d %d \n ", a , b);
	f= a-- || b++;
	printf("The value of f is %d \n ", f);
	printf("The value of a and b is %d %d \n ", a,b);
}
