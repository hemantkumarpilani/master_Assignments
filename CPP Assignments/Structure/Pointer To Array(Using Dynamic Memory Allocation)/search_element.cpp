#include<stdio.h>
int search_element(int*,int,int);
int main (){
	int n,search,i;
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
	printf("Enter the search element \n");
	scanf("%d",&search);
	if (search==search_element(ptr,n,search)){
		printf("Search element is= %d \n",search);
	}
	else {
		printf("Enter Correct Search Element \n");
	}
	delete [] ptr;
	return 0;
}
int search_element(int* ptr,int x, int y){
	int i;
	for (i=0;i<x;i++){
		if(y==*(ptr+i)){
			return y;
		}
	}
}
