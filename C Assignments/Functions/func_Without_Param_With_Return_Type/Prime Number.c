//Prime number using while loop
#include<stdio.h>
int prime_number();
void main (){
	int a;
	a=prime_number();
	if (a==0){
		printf("Entered number is a prime number \n");
	}
	else {
		printf("Entered number is not a prime number \n");
	}
}
int prime_number(){
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
		return flag;
	}
	else {
		return flag;
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
