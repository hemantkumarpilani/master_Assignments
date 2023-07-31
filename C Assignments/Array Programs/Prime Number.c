//Prime Number
#include<stdio.h>
void main (){
	int n,i,j,c,count,b=0,k=0;
	printf("Enter the array size \n");
	scanf("%d",&n);
	int a[n],prime[k];
	printf("Enter array elements :- \n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n printing array elements \n");
	for (i=0;i<n;i++){
		printf("%d \n",a[i]);
	}
	printf ("Prime Numbers :- \n");
	for (i=0;i<n;i++){
		count=0;
		for (j=1;j<=a[i];j++){
			if((a[i]==1) || (a[i]==2){
				printf("%d is not a prime number \n",a[i]);
				break;
			}
			else {
				c= a[i]%j;
				if (c==0){
					count= count+1;
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
		printf("%d \n",prime[k]);
	}
}
