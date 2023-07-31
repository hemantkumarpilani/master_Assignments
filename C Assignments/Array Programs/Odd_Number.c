// Odd Number
#include<stdio.h>
void main(){
	int a[5],i,count=0;
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
	printf ("Odd Numbers :- \n");
	for (i=0;i<5;i++){
		if (a[i]%2==1){
			printf("%d \n",a[i]);
			count= count+1;
		}
	}
	printf("No of odd numbers in array= %d",count);
}
