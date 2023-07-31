//relational operatrors
#include<stdio.h>
void main(){
	int a;
	int b;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	int c,d,e,f,g,h,i;
	c=a<b;
	printf("The value of c is %d \n", c);
	d=a>b;
	printf("The value of d is %d \n", d);
	e= a>=b;
	printf("The value of e is %d \n", e);
	f= a<=b;
	printf("The value of f is %d \n ", f);
	g= a==b;
	printf("The value of g is %d \n", g);
	h= a!=b;
	printf("The value of h is %d \n ", h);
	i=a=b;
	printf("The value of i is %d \n", i);
}
