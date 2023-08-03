// Odd Number
#include<stdio.h>
int odd_number(int*, int);
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
	printf("No of odd numbers in array= %d",odd_number(ptr,n));	
}
int odd_number(int* ptr, int n){
	int i,count=0;
	printf("Printing Odd Numbers :- \n");
	for (i=0;i<5;i++){
		if (ptr[i]%2==1){
			printf("%d \n",ptr[i]);
			count= count+1;
		}
	}
	return count;
}
