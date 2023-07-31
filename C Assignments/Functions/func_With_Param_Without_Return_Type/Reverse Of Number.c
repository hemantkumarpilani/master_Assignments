//Reverse of no using while lopp
#include<stdio.h>
void rev_no(int);
void main (){
	int a;
	printf("Enter number \n");
	scanf("%d",&a);
	rev_no(a);
}
void rev_no(int a){
	int rev_num=0,r;
	while (a>0){
		r=a%10;
		rev_num=rev_num*10+r;
		a=a/10;
	}
	printf("The reverse number is = %d \n",rev_num);
}
