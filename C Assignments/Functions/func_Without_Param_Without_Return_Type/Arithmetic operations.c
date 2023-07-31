#include<stdio.h>
void add ();
void subtract();
void product();
void division();
void modulus();
void main (){
	add();
	printf("Adding of two numbers is complete \n");
	subtract();
	printf("Subtraction of two numbers is complete \n");
	product();
	printf("Multiplication of two numbers is complete \n");
	division();
	printf("Division of two numbers is complete \n");
	modulus();
	printf("Modulus of two numbers is complete \n");
}
void add(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a+b;
	printf("sum=%d \n",c);
}
void subtract(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a-b;
	printf("Subtraction=%d \n",c);
}
void product(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a*b;
	printf("Multiplication=%d \n",c);
}
void division(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a/b;
	printf("Division=%d \n",c);
}
void modulus(){
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	c=a%b;
	printf("Modulus=%d \n",c);
}
