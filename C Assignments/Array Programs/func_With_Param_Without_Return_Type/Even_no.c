//Even no in array
#include<stdio.h>
void even_number(int*);
void main(){
	int arr[5],i;
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<5;i++){
		printf("%d \n",arr[i]);
	}
	even_number(arr);	
}
void even_number(int* ptr){
	int i,count=0;
	printf("Printing Even Numbers :- \n");
	for (i=0;i<5;i++){
		if (ptr[i]%2==0){
			printf("%d \n",ptr[i]);
			count= count+1;
		}
	}
	printf("No of even numbers in array= %d",count);
}
