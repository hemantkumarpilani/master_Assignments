//Even no in array
#include<stdio.h>
int even_number(int*,int);
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
	printf("No of even numbers in array= %d",even_number(ptr,n));
	return 0;
}
int even_number(int* ptr, int n){
	int i,count=0;
	printf("Printing Even Numbers :- \n");
	for (i=0;i<5;i++){
		if (ptr[i]%2==0){
			printf("%d \n",ptr[i]);
			count= count+1;
		}
	}
	return count;
}
