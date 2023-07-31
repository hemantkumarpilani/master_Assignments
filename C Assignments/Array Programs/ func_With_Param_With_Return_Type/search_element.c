#include<stdio.h>
int search_element(int*,int,int);
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
	if (search==search_element(arr,n,search)){
		printf("Search element is= %d \n",search);
	}
	else {
		printf("Enter Correct Search Element \n");
	}
}
int search_element(int* ptr,int x, int y){
	int i;
	for (i=0;i<x;i++){
		if(y==*(ptr+i)){
			return y;
		}
	}
}
