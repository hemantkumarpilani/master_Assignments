#include<stdio.h>
typedef struct sales_manager{
	int id;
	char name[20];
	int salary;
	float incentive;
	int target;
}mng;
void store_sales(mng*,int);
void display_sales(mng*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	mng m[n];
	store_sales(m,n);
	display_sales(m,n);
}
void store_sales(mng* m, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter name,id,salary,target \n");
		scanf("%s %d %d %d",&m[i].name,&m[i].id,&m[i].salary,&m[i].target);
		if (m[i].target>=500){
			m[i].incentive= ((20*m[i].salary)/100);
		}
		else {
			m[i].incentive= ((5*m[i].salary)/100);
		}	
	}
}
void display_sales(mng* m, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Manager 's name is %s, id is %d, salary is %d, able to reach target is %d and incentive is %f \n",m[i].name,m[i].id,m[i].salary,m[i].target,m[i].incentive);	
	}
}
