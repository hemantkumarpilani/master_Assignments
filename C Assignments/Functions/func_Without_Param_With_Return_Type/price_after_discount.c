//the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
int discount ();
void main(){
	int a;
	a= discount();
	printf("The new price of shopping after discount is = %d \n",a);
}
int discount (){
	int price,discount;
	printf("Enter price of shopping \n");
	scanf("%d",&price);
	if ((price>5000) && (price<=10000)){
		discount=20;
		price=price-((price*discount)/100);
		return price;
	}
	else if ((price>10000) && (price<=15000)){
		discount=30;
		price=price-((price*discount)/100);
		return price;
	}
	else if ((price>15000) && (price<=20000)){
		discount=35;
		price=price-((price*discount)/100);
		return price;
	}
	else {
		return price;
	}
}
