#include<stdio.h>
void operations(int*,int*,char*);
void main (){
	int a,b;
	char op;
	printf("Enter operator \n");
	scanf("%c",&op);
	printf("Enter value of a and b \n");
	scanf("%d%d",&a,&b);
	operations(&a,&b,&op);
}
void operations(int* d, int* e, char*f){
	int a,b,c;
	char op;
	a= *d;
	b= *e;
	op= *f;
	if (op=='+'){
		c=a+b;
		printf("Sum is = %d \n",c);
	}
	else if (op=='-'){
		c=a-b;
		printf("Difference is = %d \n",c);
	}
	else if (op=='*'){
		c=a*b;
		printf("Multiplication is = %d \n",c);
	}
	else if (op=='/'){
		c=a/b;
		printf("Division is = %d \n",c);
	}
	else if (op=='%'){
		c=a%b;
		printf("Modulus is = %d \n",c);
	}
	else {
		printf("Enter a valid operator \n");
	}
}
