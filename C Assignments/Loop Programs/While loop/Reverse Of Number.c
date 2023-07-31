//Reverse of no using while lopp
#include<stdio.h>
void main (){
	int a,rev_num=0,r;
	printf("Enter number \n");
	scanf("%d",&a);
	while (a>0){
		r=a%10;
		rev_num=rev_num*10+r;
		a=a/10;
	}
	printf("The reverse number is = %d \n",rev_num);
}
