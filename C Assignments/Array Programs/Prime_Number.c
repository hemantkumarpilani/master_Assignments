//Prime Number
#include<stdio.h>
void main(){
	int a[5],i,j,c,b=0;
	printf("Enter the 5 numbers in array \n");
	for (i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf ("\n \n \n");
	for (i=0;i<5;i++){
		printf("%d \n",a[i]);
	}
	printf ("Prime Numbers :- \n");
	for (i=0;i<5;i++){
		int count=0;
		for (j=1;j<=a[i];j++){
			c= a[i]%j;
			if (c==0){
				count= count+1;
			}
		}
		if (count==2){
			printf("%d \n",a[i]);
			b= b+1;
		}
	}
	printf("Total no. of prime numbers in array is =%d \n",b);
}
