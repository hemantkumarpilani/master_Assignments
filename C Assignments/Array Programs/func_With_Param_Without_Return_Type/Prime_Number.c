#include<stdio.h>
void prime_find(int*,int);
void main (){
	int n,i;
	printf("Enter the array size \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements :- \n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n printing array elements \n");
	for (i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	prime_find(arr,n);
}
void prime_find(int* a, int d){
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
	printf("Total no. of prime numbers in array is =%d \n",b);
	printf("\n Prime no array :- \n");
	for (k=0;k<b;k++){
		printf("%d\t",prime[k]);
	}
}
