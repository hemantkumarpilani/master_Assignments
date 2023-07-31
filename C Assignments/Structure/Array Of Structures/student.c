#include<stdio.h>
typedef struct student {
	int roll_no;
	char name[20];
}std;
void store_student(std*,int);
void display_student(std*,int);
void main (){
	int n;
	printf("Enter array size \n");
	scanf("%d",&n);
	std s[n];
	store_student(s,n);
	display_student(s,n);
}
void store_student(std* s, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Enter roll no and name \n");
		scanf("%d %s",&s[i].roll_no,&s[i].name);	
	}
}
void display_student(std* s, int n){
	int i;
	for (i=0;i<n;i++){
		printf("Name of student is %s and rollno is = %d \n",s[i].name,s[i].roll_no);	
	}
}
