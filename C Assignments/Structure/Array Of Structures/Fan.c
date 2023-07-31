#include<stdio.h>
typedef struct fan {
	int no_of_blades;
	char name[20];
	int price;
	int rpm;
}fan;
void store_fan(fan*,int);
void display_fan(fan*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	fan f[n];
	store_fan(f,n);
	display_fan(f,n);
}
void store_fan(fan* f, int n){
	int i;
	printf("Fan 's information :- \n");
	for (i=0;i<n;i++){
		printf("Enter no of blades,name,price & rpm \n");
		scanf("%d %s %d %d",&f[i].no_of_blades,&f[i].name,&f[i].price,&f[i].rpm);	
	}
}
void display_fan(fan* f, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Name of fan is %s having %d blades, rpm is %d and price is %d \n",f[i].name,f[i].no_of_blades,f[i].rpm,f[i].price);	
	}
}

