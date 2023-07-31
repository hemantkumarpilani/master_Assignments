//the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
void discount (int*);
void main(){
	int price;
	printf("Enter price of shopping \n");
	scanf("%d",&price);
	discount (&price);
}
void discount (int* a){
	int price;
	price= *a;
	int discount;
	if ((price>5000) && (price<=10000)){
		discount=20;
		price=price-((price*discount)/100);
		printf("The new price of shopping after discount is = %d \n",price);
	}
	else if ((price>10000) && (price<=15000)){
		discount=30;
		price=price-((price*discount)/100);
		printf("The new price of shopping after discount is = %d \n",price);
	}
	else if ((price>15000) && (price<=20000)){
		discount=35;
		price=price-((price*discount)/100);
		printf("The new price of shopping after discount is = %d \n",price);
	}
	else {
		printf("No Discount is given \n");
	}
}
