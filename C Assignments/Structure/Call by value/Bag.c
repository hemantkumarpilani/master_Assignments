#include<stdio.h>
typedef struct bag {
	int price;
	char company[20];
	char colour[20];
}bag;
bag store_bag(bag);
bag display_bag(bag);
void main (){
	bag b1;
	b1= store_bag(b1);
	display_bag(b1);
}
bag store_bag(bag b1){
	printf("Enter bag 's company, price & colour \n");
	scanf("%s %d %s",&b1.company,&b1.price,&b1.colour);
	return b1;
}
bag display_bag(bag b1){
	printf("Bag 's comapny is %s, price is %d and colour is %s \n", b1.company,b1.price,b1.colour);
}
