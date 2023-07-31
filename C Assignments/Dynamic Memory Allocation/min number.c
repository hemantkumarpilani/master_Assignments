//minimum number of array
#include<stdio.h>
#include<stdlib.h>
void main (){
	int i,n,min;
	printf("Enter array size \n");
	scanf("%d",&n);
	int* arr;
	arr= (int*)malloc(n*sizeof(int));
	printf("Enter array elements \n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf ("printing array elements \n");
	for (i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	printf ("\n \n \n");
	min= arr[0];
	for (i=0;i<n;i++){
		if (arr[i]<min){
			min= arr[i];
		}
	}
	printf("Minimum number of array is = %d \n",min);
}
