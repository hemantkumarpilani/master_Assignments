#include<stdio.h>
typedef struct complex{
	int r;
	int img;
}comp;
void store_complex(comp*,int);
void display_complex(comp*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	comp c[n];
	store_complex(c,n);
	display_complex(c,n);
}
void store_complex(comp* c,int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter real no \n");
		scanf("%d",&c[i].r);
		printf("Ente imaginary no \n");
		scanf("%d",&c[i].img);	
	}
}
void display_complex(comp* c,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Complex no is %d+%di \n",c[i].r,c[i].img);	
	}
}
