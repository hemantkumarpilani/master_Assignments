#include<stdio.h>
int add (int,int);
int subtract(int,int);
int product(int,int);
int division(int,int);
int modulus(int,int);
void main (){
	int a,b,add1,subtract1,product1,division1,modulus1;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	add1= add(a,b);
	printf("sum=%d \n",add1);
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	subtract1= subtract(a,b);
	printf("Subtraction=%d \n",subtract1);
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	product1= product(a,b);
	printf("Multiplication=%d \n",product1);
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	division1= division(a,b);
	printf("Division=%d \n",division1);
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	modulus1= modulus(a,b);
	printf("Modulus=%d \n",modulus1);
}
int add(int a, int b){
	int c;
	c=a+b;
	return c;
}
int subtract(int a, int b){
	int c;
	c=a-b;
	return c;
}
int product(int a, int b){
	int c;
	c=a*b;
	return c;
}
int division(int a, int b){
	int c;
	c=a/b;
	return c;
}
int modulus(int a, int b){
	int c;
	c=a%b;
	return c;
}
