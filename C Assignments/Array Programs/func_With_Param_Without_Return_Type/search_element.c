#include<stdio.h>
void search_element(int*,int,int);
void main (){
	int n,search,i;
	printf("Enter the array size \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements :- \n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nprinting array elements \n");
	for (i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	printf("Enter the search element \n");
	scanf("%d",&search);
	search_element(arr,n,search);
}
void search_element(int* ptr,int x, int y){
	int i;
	for (i=0;i<x;i++){
		if(y==*(ptr+i)){
			printf("Search element is = %d \n",y);
			break;
		}
	}
	if (i==x){
		printf("Enter Correct Search Element \n");
	}
}
