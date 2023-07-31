#include<stdio.h>
typedef struct shoes {
	int price;
	char colour[20];
	char brand[20];
}sh;
void store_shoes(sh*,int);
void display_shoes(sh*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	sh b[n];
	store_shoes(b,n);
	display_shoes(b,n);
}
void store_shoes(sh* b, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter shoes 's brand,price and colour \n");
		scanf("%s %d %s",&b[i].brand,&b[i].price,&b[i].colour);
	}
}
void display_shoes (sh* b, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Brand of shoes is %s, price is %d and colour is %s \n",b[i].brand,b[i].price,b[i].colour);
	}
}
