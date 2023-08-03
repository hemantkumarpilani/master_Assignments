//maximum number of array
#include<stdio.h>
int maximum(int*,int);
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
	printf("Maximum number of array is = %d \n",maximum(ptr,n));
	delete [] ptr;
	return 0;
}
int maximum (int* ptr, int a){
	int max,i=0;
	max= ptr[i];
	for (i=0;i<a;i++){
		if (ptr[i]>max){
			max= ptr[i];
		}
	}
	return max;
}
