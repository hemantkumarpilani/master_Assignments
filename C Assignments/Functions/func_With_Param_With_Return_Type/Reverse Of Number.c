//Reverse of no using while lopp
#include<stdio.h>
int rev_no(int);
void main (){
	int a,b;
	printf("Enter number \n");
	scanf("%d",&a);
	b= rev_no(a);
	printf("The reverse number is = %d \n",b);
}
int rev_no(int a){
	int rev_num=0,r;
	while (a>0){
		r=a%10;
		rev_num=rev_num*10+r;
		a=a/10;
	}
	return rev_num;
}
