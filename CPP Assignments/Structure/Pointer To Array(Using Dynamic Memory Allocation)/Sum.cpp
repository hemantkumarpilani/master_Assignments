//Sum of elements of array
#include<stdio.h>
int sum(int*,int);
int main (){
	int n,i;
	int* ptr;
	printf("Enter Array Size \n");
	scanf("%d",&n);
	ptr= new int[n];
	printf("Enter Array Elements \n");
	for (i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	printf ("Printing Array Elements \n");
	for (i=0;i<n;i++){
		printf("%d \n",ptr[i]);
	
	}
	printf("Sum of all elements of array is = %d ",sum(ptr,n));
	delete [] ptr;
	return 0;
}
int sum (int *ptr,int n){
	int i,sum=0;
	for (i=0;i<n;i++){
		sum= sum+ptr[i];
	}
	return sum;
}
