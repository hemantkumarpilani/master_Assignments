//maximum number of array
#include<stdio.h>
void main (){
	int a[5],i,max;
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
	printf ("\n \n \n");
	max= a[0];
	for (i=0;i<5;i++){
		if (a[i]>max){
			max= a[i];
		}
	}
	printf("Maximum number of array is = %d \n",max);
}
