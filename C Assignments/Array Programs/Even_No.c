//Even no in array
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
	printf ("Even Numbers :- \n");
	for (i=0;i<5;i++){
		if (a[i]%2==0){
			printf("%d \n",a[i]);
			count= count+1;
		}
	}
	printf("No of even numbers in array= %d",count);
}

