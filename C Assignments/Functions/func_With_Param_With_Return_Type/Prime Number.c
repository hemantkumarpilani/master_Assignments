//Prime number using while loop
#include<stdio.h>
int prime_number(int);
void main (){
	int a,flag;
	printf("Enter number \n");
	scanf("%d",&a);
	flag= prime_number(a);
	if (flag==0){
		printf("%d is a prime number \n",a);
	}
	else {
		printf("%d is not a prime number \n",a);
	}
}
int prime_number(int a){
	int c,i=2,flag=0;
	while(i<=a/2){
		c=a%i;
		i++;
		if(c==0){
			flag=1;
			break;
		}
	}
	return flag;
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
