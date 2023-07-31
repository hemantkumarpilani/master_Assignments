#include<stdio.h>
typedef struct admin {
	int id;
	char name[20];
	int salary;
	int allowance;
}adm;
void store_admin(adm*,int);
void display_admin(adm*,int);
void main (){
	int n;
	printf("Enter size of structure 's array \n");
	scanf("%d",&n);
	adm a[n];
	store_admin(a,n);
	display_admin(a,n);
}
void store_admin(adm* a,int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter id,name,salary of employee \n");
		scanf("%d",&a[i].id);
		scanf("%s",&a[i].name);
		scanf("%d",&a[i].salary);
		a[i].allowance= ((5*a[i].salary)/100);	
	}
}
void display_admin(adm* a,int n){
	int i;
	printf("Printing details of all employees:-\n");
	for (i=0;i<n;i++){
		printf("Admin 's name is %s, id is %d, salary is %d and allowance is %d \n",a[i].name,a[i].id,a[i].salary,a[i].allowance);	
	}
}
