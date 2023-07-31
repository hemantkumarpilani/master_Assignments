#include<stdio.h>
int discount(int*,char*);
int main (){
	int price,a;
	char c;
	printf("Are u a student ?? \n");
	printf("Enter 'Y'' for yes and 'N' for No \n");
	scanf("%c",&c);
	printf("Enter price \n");
	scanf("%d",&price);
	a= discount(&price,&c);
	printf("New Price after discount is =%d \n",a);
}
int discount (int *price, char* c){
	int discount,a;
	char d;
	a= *price;
	d= *c;
	if (d=='Y'){
		if (a>500){
			discount=20;
			a= a-((a*discount)/100);
			return a;
		}
		else {
			discount=10;
			a= a-((a*discount)/100);
			return a;
		}
	}
	else {
		if (a>600){
			discount=15;
			a= a-((a*discount)/100);
			return a;
		}
		else {
			return a;
		}
	}
}
