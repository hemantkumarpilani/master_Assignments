#include<stdio.h>
struct fan {
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
};
void main (){
	struct fan f1;
	printf("Fan 's information :- \n");
	printf("Enter no of blades,name,price & rpm \n");
	scanf("%d %s %d %d",&f1.no_of_blades,&f1.name,&f1.price,&f1.rpm);
	printf("Name of fan is %s having %d blades, rpm is %d and price is %d \n",f1.name,f1.no_of_blades,f1.rpm,f1.price);
}
