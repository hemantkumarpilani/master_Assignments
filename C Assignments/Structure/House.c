#include<stdio.h>
struct house{
	int price;
	char area[20];
	int BHK;
	char soceity_name[20];
};
void main(){
	struct house h1;
	printf("Enter the price, area, BHK and society name \n");
	scanf("%d %s %d %s",&h1.price,&h1.area,&h1.BHK,&h1.soceity_name);
	printf("Price of house is %d, area is %s, %d BHK and soceity name is %s \n",h1.price,h1.area,h1.BHK,h1.soceity_name);
}
