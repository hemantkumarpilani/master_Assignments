//Prime number using while loop
#include<stdio.h>
void main (){
int a,c,i=2,flag=0;
	printf("Enter number \n");
	scanf("%d",&a);
	while(i<=a/2){
		c=a%i;
		i++;
		if(c==0){
			flag=1;
			break;
		}
	}
	if (flag==0){
		printf("Entered number %d is prime number \n",a);
	}
	else {
		printf("Entered number %d is not prime number \n",a);
	}
}
//	int a,c,i=1,count=0;
//	printf("Enter number \n");
//	scanf("%d",&a);
//	while(i<=a){
//		c=a%i;
//		i++;
//		if (c==0){
//			count=count+1;
//		}
//	}
//	if (count==2){
//		printf("%d is a prime number \n",a);	
//	}
//	else{
//		printf("%d is not a prime number \n",a);
//		printf("count=%d \n",count);	
//	}
