#include<stdio.h>
typedef struct human_resources {
	int id;
	char name[20];
	int salary;
	int commission;
}HR;
void store_HR(HR*,int);
void display_HR(HR*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	HR h[n];
	store_HR(h,n);
	display_HR(h,n);
}
void store_HR(HR* h, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter name,id,salary \n");
		scanf("%s %d %d",h[i].name,&h[i].id,&h[i].salary);
		h[i].commission= ((5*h[i].salary)/100);	
	}
}
void display_HR(HR* h, int n){
	int i;
	for(i=0;i<n;i++){
		printf("HR 's name is %s, id is %d, salary is %d and commission is %d \n",h[i].name,h[i].id,h[i].salary,h[i].commission);	
	}
}
