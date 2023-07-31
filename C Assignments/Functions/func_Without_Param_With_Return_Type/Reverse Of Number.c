//Reverse of no using while lopp
#include<stdio.h>
int rev_no();
void main (){
	int a;
	a=rev_no();
	printf("The reverse number is = %d \n",a);
}
int rev_no(){
	int a,rev_num=0,r;
	printf("Enter number \n");
	scanf("%d",&a);
	while (a>0){
		r=a%10;
		rev_num=rev_num*10+r;
		a=a/10;
	}
	return rev_num;
}
