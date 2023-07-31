//table of 2
#include<stdio.h>
void main (){
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	int i=1;
	while (i<=10){
		num= num*i;
		printf("%d \n",num);
		num=2;
		i++;
	}
}
