//minimum number of array
#include<stdio.h>
int minimum(int*,int);
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
	printf("Minimum number of array is = %d \n",minimum(ptr,n));
	delete [] ptr;
	return 0;
}
int minimum (int* ptr, int a){
	int min,i=0;
	min= ptr[i];
	for (i=0;i<a;i++){
		if (ptr[i]<min){
			min= ptr[i];
		}
	}
	return min;
}
