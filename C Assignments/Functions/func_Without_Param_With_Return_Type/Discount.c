#include<stdio.h>
int discount();
void main (){
	int a;
	a= discount();
	printf("New Price after discount is =%d \n",a);
}
int discount (){
	int price,discount;
	char c;
	printf("Are u a student ?? \n");
	printf("Enter 'Y'' for yes and 'N' for No \n");
	scanf("%c",&c);
	printf("Enter price \n");
	scanf("%d",&price);
	if (c=='Y'){
		if (price>500){
			discount=20;
			price= price-((price*discount)/100);
			return price;
		}
		else {
			discount=10;
			price= price-((price*discount)/100);
			return price;
		}
	}
	else {
		if (price>600){
			discount=15;
			price= price-((price*discount)/100);
			return price;
		}
		else {
			return price;
		}
	}
}
