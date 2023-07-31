//minimum number of array
#include<stdio.h>
void main (){
	int a[5],i,min;
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
	printf ("\n \n \n");
	min= a[0];
	for (i=0;i<5;i++){
		if (a[i]<min){
			min= a[i];
		}
	}
	printf("Minimum number of array is = %d \n",min);
}
