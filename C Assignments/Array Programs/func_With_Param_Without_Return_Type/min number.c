//minimum number of array
#include<stdio.h>
void minimum(int*,int);
void main (){
	int n,i;
	printf("Enter Array Size \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Array Elements \n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf ("Printing Array Elements \n");
	for (i=0;i<n;i++){
		printf("%d \n",arr[i]);
	
	}
	minimum(arr,n);
}
void minimum (int* ptr, int a){
	int min,i;
	min= *ptr;
	for (i=0;i<a;i++){
		if (*(ptr+i)<min){
			min= *(ptr+i);
		}
	}
	printf("Minimum number of array is = %d \n",min);
}
