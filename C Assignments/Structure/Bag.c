#include<stdio.h>
struct bag {
	int price;
	char company[20];
	char colour[20];
};
void main (){
	struct bag b1;
	printf("Enter bag 's company, price & colour \n");
	scanf("%s %d %s",&b1.company,&b1.price,&b1.colour);
	printf("Bag 's comapny is %s, price is %d and colour is %s \n", b1.company,b1.price,b1.colour);
}
