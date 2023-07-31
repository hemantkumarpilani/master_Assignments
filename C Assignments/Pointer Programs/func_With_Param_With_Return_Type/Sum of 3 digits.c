//Sum of 3 digits
#include<stdio.h>
int sum(int*);
void main(){
	int num,b;
	printf("Enter the number \n");
	scanf("%d",&num);
	b= sum(&num);
	printf("Sum of 3 digits is %d", b);
}
int sum(int* num){
	int a,b,c,d,e,ans;
	e= *num;
	a=e/10;
	b=e%10;
	c=a/10;
	d=a%10;
	ans=b+c+d;
	return ans;
}
