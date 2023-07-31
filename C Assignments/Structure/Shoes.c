#include<stdio.h>
struct shoes {
	int price;
	char colour[20];
	char brand[20];
};
void main (){
	struct shoes b1;
	printf("Enter shoes 's brand,price and colour \n");
	scanf("%s %d %s",&b1.brand,&b1.price,&b1.colour);
	printf("Brand of shoes is %s, price is %d and colour is %s",b1.brand,b1.price,b1.colour);
}
