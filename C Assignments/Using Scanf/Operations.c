#include<stdio.h>
void main (){
	int a,b,c;
	char op;
//	printf("Enter operator \n");
//	scanf("%c",&op);
	printf("Enter value of a and b \n");
	scanf("%d%d",&a,&b);
	printf("Enter operator \n");
	scanf("%c",&op);
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
