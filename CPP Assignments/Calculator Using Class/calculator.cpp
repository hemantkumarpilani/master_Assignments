#include<stdio.h>
typedef class calculator{
	
	public:
		
	void add(int a, int b){
		printf("Sum is = %d",a+b);
	}
	
	float add(int a, float b){
		return a+b;
	}	
	
	float add(float a, int b){
		return a+b;
	}
	
	float add(float a, float b){
		return a+b;
	}	
	
	void sub(int a, int b){
		printf("Subtraction is = %d",a-b);
	}
	
	float sub(int a, float b){
		return a-b;
	}	
	
	float sub(float a, int b){
		return a-b;
	}
	
	float sub(float a, float b){
		return a-b;
	}
	
	void mult(int a, int b){
		printf("Product is = %d",a*b);
	}
	
	float mult(int a, float b){
		return a*b;
	}	
	
	float mult(float a, int b){
		return a*b;
	}
	
	float mult(float a, float b){
		return a*b;
	}
	
	void div(int a, int b){
		printf("Division is = %d",a/b);
	}
	
	float div(int a, float b){
		return a/b;
	}	
	
	float div(float a, int b){
		return a/b;
	}
	
	float div(float a, float b){
		return a/b;
	}
}cal;
int main (){
	
	printf("1.  Addition of both int values\n");
	printf("2.  Addition of both float values\n");
	printf("3.  Addition of one int and one float value\n");
	printf("4.  Addition of one float and one int value\n");
	
	printf("5.  Subtraction of both int values\n");
	printf("6.  Subtraction of both float values\n");
	printf("7.  Subtraction of one int and one float value\n");
	printf("8.  subtraction of one float and one int value\n");
	
	printf("9.  Multiplication of both int values\n");
	printf("10.  Multiplication of both float values\n");
	printf("11.  Multiplication of one int and one float value\n");
	printf("12.  Multiplication of one float and one int value\n");
	
	printf("13.  Division of both int values\n");
	printf("14.  Division of both float values\n");
	printf("15.  Division of one int and one float value\n");
	printf("16.  Division of one float and one int value\n");
	
	int choice;
	cal c;
	
	printf("Enter a choice\n")	;
	scanf("%d",&choice);
	
	if (choice==1){
		int a,b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		c.add(a,b);
	}
	
	else if (choice==2){
		float a,b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		fflush(stdin);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Sum is = %f",c.add(a,b));
	}
	
	else if (choice==3){
		int a;
		float b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Sum is = %f",c.add(a,b));
	}
	
	else if (choice==4){
		float a;
		int b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		printf("Sum is = %f",c.add(a,b));
	}
	
	else if (choice==5){
		int a,b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		c.sub(a,b);
	}
	
	else if (choice==6){
		float a,b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Subtraction is = %f",c.sub(a,b));
	}
	
	else if (choice==7){
		int a;
		float b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Subtraction is = %f",c.sub(a,b));
	}
	
	else if (choice==8){
		float a;
		int b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		printf("Subtraction is = %f",c.sub(a,b));
	}
	
	else if (choice==9){
		int a,b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		c.mult(a,b);
	}
	
	else if (choice==10){
		float a,b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		fflush(stdin);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Multiplication is = %f",c.mult(a,b));
	}
	
	else if (choice==11){
		int a;
		float b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Multiplication is = %f",c.mult(a,b));
	}
	
	else if (choice==12){
		float a;
		int b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		printf("Multiplication is = %f",c.mult(a,b));
	}
	
	else if (choice==13){
		int a,b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		c.div(a,b);
	}
	
	else if (choice==14){
		float a,b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Division is = %f",c.div(a,b));
	}
	
	else if (choice==15){
		int a;
		float b;
		printf("Enter 1st int vlaue:\n");
		scanf("%d",&a);
		printf("Enter 2nd float vlaue:\n");
		scanf("%f",&b);
		printf("Division is = %f",c.div(a,b));
	}
	
	else if (choice==16){
		float a;
		int b;
		printf("Enter 1st float vlaue:\n");
		scanf("%f",&a);
		printf("Enter 2nd int vlaue:\n");
		scanf("%d",&b);
		printf("Division is = %f",c.div(a,b));
	}
	
	
	return 0;
}
