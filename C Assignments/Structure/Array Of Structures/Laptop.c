#include<stdio.h>
typedef struct laptop{
	int price;
	char company[20];
	char warranty[20];
	char operating_system[20];
	char RAM[20];
}lap;
void store_laptop (lap *, int);
void display_laptop (lap *, int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	lap l[n];
	store_laptop(l,n);
	display_laptop(l,n);
}
void store_laptop(lap* l, int n){
	int i;
	printf("Enter Laptop information \n");
	for (i=0;i<n;i++){
		printf("Enter price, company, warranty, operating_system, RAM \n");
		scanf("%d %s %s %s %s",&l[i].price,&l[i].company,&l[i].warranty,&l[i].operating_system,&l[i].RAM);
	}
}
void display_laptop (lap* l, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Price : %d \n",l[i].price);
		printf("Company : %s \n",l[i].company);
		printf("Warranty : %s \n",l[i].warranty);
		printf("Operating System : %s \n",l[i].operating_system);
		printf("RAM : %s \n",l[i].RAM);
	}
}
