#include<stdio.h>
typedef struct bag {
	int price;
	char company[20];
	char colour[20];
}bag;
void store_bag(bag*,int);
void display_bag(bag*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	bag b[n];
	store_bag(b,n);
	display_bag(b,n);
}
void store_bag(bag* b,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter bag 's company, price & colour \n");
		scanf("%s",&b[i].company);
		scanf("%d",&b[i].price);
		scanf("%s",&b[i].colour);
	}
}
void display_bag(bag* b,int n){
	int i;
	for (i=0;i<n;i++){
		printf("Bag 's comapny is %s, price is %d and colour is %s \n", b[i].company,b[i].price,b[i].colour);	
	}
}
