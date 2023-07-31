#include<stdio.h>
void add (int,int);
void subtract(int,int);
void product(int,int);
void division(int,int);
void modulus(int,int);
void main (){
	int a,b;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	add(a,b);
	printf("Adding of two numbers is complete \n");
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	subtract(a,b);
	printf("Subtraction of two numbers is complete \n");
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	product(a,b);
	printf("Multiplication of two numbers is complete \n");
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	division(a,b);
	printf("Division of two numbers is complete \n");
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	modulus(a,b);
	printf("Modulus of two numbers is complete \n");
}
void add(int a, int b){
	int c;
	c=a+b;
	printf("sum=%d \n",c);
}
void subtract(int a, int b){
	int c;
	c=a-b;
	printf("Subtraction=%d \n",c);
}
void product(int a, int b){
	int c;
	c=a*b;
	printf("Multiplication=%d \n",c);
}
void division(int a, int b){
	int c;
	c=a/b;
	printf("Division=%d \n",c);
}
void modulus(int a, int b){
	int c;
	c=a%b;
	printf("Modulus=%d \n",c);
}
