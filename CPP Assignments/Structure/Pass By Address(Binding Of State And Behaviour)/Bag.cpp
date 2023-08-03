#include<stdio.h>
struct bag {
	int price;
	char company[20];
	char colour[20];
	
	void store_bag(){
	printf("Enter bag 's company, price & colour \n");
	scanf("%s %d %s",&company,&price,&colour);
	}
	
	void display_bag(){
	printf("Bag 's comapny is %s, price is %d and colour is %s \n", company,price,colour);
	}
};
int main (){
	bag b1;
	b1.store_bag();
	b1.display_bag();
	return 0;
}
