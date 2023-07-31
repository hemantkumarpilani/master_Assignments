//Sum of elements of array
#include<stdio.h>
#include<stdlib.h>
void main (){
	int i,n,sum=0;
	printf("Enter array size \n");
	scanf("%d",&n);
	int* arr;
	arr= (int*)malloc(n*sizeof(int));
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	for (i=0;i<n;i++){
		sum= sum+arr[i];
	}
	printf("Sum of all elements of array is = %d ",sum);
}
