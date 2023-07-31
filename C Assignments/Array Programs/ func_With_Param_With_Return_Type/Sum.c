//Sum of elements of array
#include<stdio.h>
int sum(int*,int);
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
	printf("Sum of all elements of array is = %d ",sum(arr,n));
}
int sum (int *ptr,int n){
	int i,sum=0;
	for (i=0;i<n;i++){
		sum= sum+*(ptr+i);
	}
	return sum;
}
