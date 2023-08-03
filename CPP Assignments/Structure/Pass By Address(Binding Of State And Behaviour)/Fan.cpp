#include<stdio.h>
struct fan {
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
	
	void store_fan(){
	printf("Fan 's information :- \n");
	printf("Enter no of blades,name,price & rpm \n");
	scanf("%d %s %d %d",&no_of_blades,&name,&price,&rpm);
}

	void display_fan(){
	printf("Name of fan is %s having %d blades, rpm is %d and price is %d \n",name,no_of_blades,rpm,price);
}
};
int main (){
	fan f1;
	f1.store_fan();
	f1.display_fan();
	return 0;
}
