#include<stdio.h>
int prime_find(int*,int);
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
	printf("Total no. of prime numbers in array is =%d \n",prime_find(ptr,n));
	return 0;
}
int prime_find(int* a, int d){
	int i,j,k=0,b=0,c,count;
	int prime[k];
	printf ("Prime Numbers printing :- \n");
	for (i=0;i<d;i++){
		count=0;
		for (j=1;j<=a[i];j++){
			if((a[i]==1) || (a[i]==2)){
				printf("%d is not a prime number \n",a[i]);
				break;
			}
			else {
				c= a[i]%j;
				if (c==0){
					count= count+1;
					if(count>2){
						break;
					}
				}	
			}		
		}
		if (count==2){
			printf("%d \n",a[i]);
			b= b+1;
			prime[k]= a[i];
			k = k+1;
		}
	}
	printf("\n Prime no array :- \n");
	for (k=0;k<b;k++){
		printf("%d\t",prime[k]);
	}
	printf("\n");
	return b;
}
