#include<stdio.h>
int operations(int*,int*,char*);
void main (){
	int a,b,c;
	char op;
	printf("Enter operator \n");
	scanf("%c",&op);
	if (op=='+'){
		printf("Enter value of a and b \n");
		scanf("%d%d",&a,&b);
		c= operations(&a,&b,&op);
		printf("Sum is = %d \n",c);
	}
	else if (op=='-'){
		printf("Enter value of a and b \n");
		scanf("%d%d",&a,&b);
		c= operations(&a,&b,&op);
		printf("Subtraction is = %d \n",c);
	}
	else if (op=='*'){
		printf("Enter value of a and b \n");
		scanf("%d%d",&a,&b);
		c= operations(&a,&b,&op);
		printf("Product is = %d \n",c);
	}
	else if (op=='/'){
		printf("Enter value of a and b \n");
		scanf("%d%d",&a,&b);
		c= operations(&a,&b,&op);
		printf("Division is  = %d \n",c);
	}
	else if (op=='%'){
		printf("Enter value of a and b \n");
		scanf("%d%d",&a,&b);
		c= operations(&a,&b,&op);
		printf("Modulus is = %d \n",c);
	}
	else {
		printf("Enter valid operator \n");
	}
}
int operations(int* a, int* b, char*op){
	int c;
	if (*op=='+'){
		c=(*a)+(*b);
		return c;
	}
	else if (*op=='-'){
		c=(*a)-(*b);
		return c;
	}
	else if (*op=='*'){
		c=(*a)*(*b);
		return c;
	}
	else if (*op=='/'){
		c=(*a)/(*b);
		return c;
	}
	else if (*op=='%'){
		c=(*a)%(*b);
		return c;
	}
	else {
		printf("Enter a valid operator \n");
	}
}
