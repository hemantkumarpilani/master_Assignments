#include<stdio.h>
typedef struct complex{
	int r;
	int img;
}comp;
void store_complex(comp*);
void display_complex(comp*);
void main (){
	comp c1;
	store_complex(&c1);
	display_complex(&c1);
}
void store_complex(comp* c1){
	printf("Enter real no \n");
	scanf("%d",&c1->r);
	printf("Ente imaginary no \n");
	scanf("%d",&c1->img);
}
void display_complex(comp* c1){
	printf("Complex no is %d+%di",c1->r,c1->img);
}
