//Greatest of 3 numbers using nested if else
#include<stdio.h>
void great_no(int*,int*,int*);
void main (){
	int d,e,f;
	printf("Enter the all values of a,b and c \n");
	scanf("%d %d %d",&d,&e,&f);
	great_no(&d,&e,&f);
}
void great_no(int* d, int* e, int* f){
	int a,b,c;
	a= *d;
	b= *e;
	c= *f;
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
