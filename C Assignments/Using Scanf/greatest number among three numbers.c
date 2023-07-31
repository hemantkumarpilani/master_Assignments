//Greatest of 3 numbers using nested if else
#include<stdio.h>
void main (){
	int a,b,c;
	printf("Enter the all values of a,b and c \n");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>b){
		if (a>c){
			printf ("The value of a = %d is greater \n",a);
		}
}
	if (b>a){
		if (b>c){
			printf ("The value of b = %d is greater \n",b);
		}
	}
	if (c>a){
		if (c>b){
			printf ("The value of c = %d is greater \n",c);
		}
	}
}
