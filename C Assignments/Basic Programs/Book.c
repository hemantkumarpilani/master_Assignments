#include<stdio.h>
typedef struct book {
	char bname[50];
	int id;
	char author[20];
	int price;
}book;
void main (){
	book b1;
	printf("Enter book 's information:- \n")	;
	printf("Enter book name \n");
	scanf("%[^\n]%*c",&b1.bname);0
	printf("Enter book id \n");
	scanf("%d",&b1.id);
	fflush (stdin);
	printf("Enter author of book \n");
	scanf("%[^\n]%*c",&b1.author);
	printf("Enter book price \n");
	scanf("%d",&b1.price);
	printf("Name of book is %s, id is %d, author is %s and price is %d \n",b1.bname,b1.id,b1.author,b1.price);
}
