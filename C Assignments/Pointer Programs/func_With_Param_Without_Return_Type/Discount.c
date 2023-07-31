#include<stdio.h>
void discount(int*,char*);
void main (){
	int price;
	char c;
	printf("Are u a student ?? \n");
	printf("Enter 'Y'' for yes and 'N' for No \n");
	scanf("%c",&c);
	printf("Enter price \n");
	scanf("%d",&price);
	discount(&price,&c);
}
void discount (int *price, char* c){
	int discount,a;
	char d;
	a= *price;
	d= *c;
	if (d=='Y'){
		if (a>500){
			discount=20;
			a= a-((a*discount)/100);
			printf("New Price after discount 20 percent being a student is =%d \n",a);
		}
		else {
			discount=10;
			a= a-((a*discount)/100);
			printf("New Price after discount 10 percent being a student is =%d \n",a);
		}
	}
	else {
		if (a>600){
			discount=15;
			a= a-((a*discount)/100);
			printf("New Price after discount 15 percent is =%d \n",a);
		}
		else {
			printf("No discount is given \n");
		}
	}
}
