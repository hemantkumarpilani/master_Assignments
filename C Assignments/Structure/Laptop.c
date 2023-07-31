#include<stdio.h>
struct laptop{
	int price;
	char company[20];
	char warranty[20];
	char operating_system[20];
	char RAM[20];
	char model[20];
};
void main (){
	struct laptop l1;
	printf("Enter Laptop information \n");
	printf("Enter price, company, warranty, operating_system, RAM, model \n");
	scanf("%d %s %s %s %s %s",&l1.price,&l1.company,&l1.warranty,&l1.operating_system,&l1.RAM,&l1.model);
	printf("Price : %d \n",l1.price);
	printf("Company : %s \n",l1.company);
	printf("Warranty : %s \n",l1.warranty);
	printf("Operating System : %s \n",l1.operating_system);
	printf("RAM : %s \n",l1.RAM);
	printf("Model : %s \n",l1.model);
}
