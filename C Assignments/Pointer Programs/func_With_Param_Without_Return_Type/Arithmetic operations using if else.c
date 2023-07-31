#include<stdio.h>
void main (){
	int a;
	int b;
	int choice;
	printf ("\n choice=1 for addition \n choice=2 for subtraction \n choice=3 for multiplication \n choice=4 for division \n");
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the choice \n");
	scanf("%d",&choice);
	if (choice==1){
		printf("Sum is = %d \n",a+b);
	}
	else if (choice==2){
		printf("Subtraction is = %d \n",a-b);
	}
	else if (choice==3){
		printf("Multiplication is = %d \n",a*b);
	}
	else if (choice==4){
		printf("Division is = %d \n",a/b);
	}
}
