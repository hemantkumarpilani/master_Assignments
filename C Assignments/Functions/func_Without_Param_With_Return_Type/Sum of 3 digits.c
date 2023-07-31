//Sum of 3 digits
#include<stdio.h>
int sum();
void main(){
	int a;
	a=sum();
	printf("Sum of 3 digits is %d", a);
}
int sum(){
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	
	int a,b,c,d,ans;
	a=num/10;
	b=num%10;
	c=a/10;
	d=a%10;
	ans=b+c+d;
	return ans;
}
