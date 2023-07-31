#include<stdio.h>
struct book{
	char name[20];
	char branch[20];
	int pages;
	int price;
};
void main (){
	struct book b1;
	printf("Enter book name, price, branch and pages \n");
	scanf("%s %d %s %d",&b1.name,&b1.price,&b1.branch,&b1.pages);
	printf("Book 's name is %s is of branch %s, price is %d rupees and pages are %d \n",b1.name,b1.branch,b1.price,b1.pages);
}
