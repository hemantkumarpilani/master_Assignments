//maximum number of array
#include<stdio.h>
void maximum(int*,int);
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
	maximum(arr,n);
}
void maximum (int* ptr, int a){
	int max,i;
	max= *ptr;
	for (i=0;i<a;i++){
		if (*(ptr+i)>max){
			max= *(ptr+i);
		}
	}
	printf("Maximum number of array is = %d \n",max);
}
