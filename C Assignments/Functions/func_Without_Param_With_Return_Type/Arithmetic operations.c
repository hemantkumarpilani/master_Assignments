#include<stdio.h>
int add ();
int subtract();
int product();
int division();
int modulus();
void main (){
	int a,b,c,d,e;
	a=add();
	printf("sum=%d \n",a);
	b=subtract();
	printf("Subtraction=%d \n",b);
	c=product();
	printf("Multiplication=%d \n",c);
	d=division();
	printf("Division=%d \n",d);
	e=modulus();
	printf("Modulus=%d \n",e);
}
int add(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a+b;
	return c;
}
int subtract(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a-b;
	return c;
}
int product(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a*b;
	return c;
}
int division(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a/b;
	return c;
}
int modulus(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a%b;
	return c;
}
