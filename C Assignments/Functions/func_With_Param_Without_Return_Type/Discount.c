#include<stdio.h>
void discount(int);
void main (){
	int price;
	char c;
	printf("Are u a student ?? \n");
	printf("Enter 'Y'' for yes and 'N' for No \n");
	scanf("%c",&c);
	printf("Enter price \n");
	scanf("%d",&price);
	discount(price);
}
void discount (int price){
	int discount;
	char c='Y';
	if (c=='Y'){
		if (price>500){
			discount=20;
			price= price-((price*discount)/100);
			printf("New Price after discount 20 percent being a student is =%d \n",price);
		}
		else {
			discount=10;
			price= price-((price*discount)/100);
			printf("New Price after discount 10 percent being a student is =%d \n",price);
		}
	}
	else {
		if (price>600){
			discount=15;
			price= price-((price*discount)/100);
			printf("New Price after discount 15 percent is =%d \n",price);
		}
		else {
			printf("No discount is given \n");
		}
	}
}
