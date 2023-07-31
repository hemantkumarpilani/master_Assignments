//Search element in array
#include<stdio.h>
#include<stdlib.h>
void main (){
	int n,search,i;
	printf("Enter the array size \n");
	scanf("%d",&n);
	int* arr;
	arr= (int*)malloc(n*sizeof(int));
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
	for (i=0;i<n;i++)
	{
		if (search==(arr[i])){
			printf("Search element is = %d \n",search);
			break;
		}
	}
	if (i==n){
		printf("Enter Correct Search Element \n");
	}
}
