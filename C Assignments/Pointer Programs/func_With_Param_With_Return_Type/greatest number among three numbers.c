//Greatest of 3 numbers using nested if else
#include<stdio.h>
int great_no(int*,int*,int*);
void main (){
	int d,e,f,a;
	printf("Enter the all values of a,b and c \n");
	scanf("%d %d %d",&d,&e,&f);
	a= great_no(&d,&e,&f);
	printf ("%d is greater \n",a);
}
int great_no(int* d, int* e, int* f){
	int a,b,c;
	a= *d;
	b= *e;
	c= *f;
	if (a>b){
		if (a>c){
			return a;
		}
}
	if (b>a){
		if (b>c){
			return b;
		}
	}
	if (c>a){
		if (c>b){
			return c;
		}
	}
}
