//Sum of 3 digits
#include<stdio.h>
void sum(int*);
void main(){
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	sum(&num);
}
void sum(int* num){
	int a,b,c,d,e,ans;
	e= *num;
	a=e/10;
	b=e%10;
	c=a/10;
	d=a%10;
	ans=b+c+d;
	printf("Sum of 3 digits is %d", ans);
}
