//Sum of elements of array
#include<stdio.h>
void main (){
	int a[5],i,sum=0;
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
	for (i=0;i<5;i++){
		sum= sum+a[i];
	}
	printf("Sum of all elements of array is = %d ",sum);
}
