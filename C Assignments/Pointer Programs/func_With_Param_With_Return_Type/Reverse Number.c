// Reverse of no and check no is palindrome or not
#include<stdio.h>
int rev_number(int*);
void main(){
	int num,a;
	printf("Enter number \n");
	scanf("%d",&num);
	a= rev_number(&num);
	printf("The Reverse number is = %d \n",a);
	if (num==a){
		printf("No is palindrome \n");
	}
	else {
		printf("No is not palindrome \n");
	}
}
int rev_number(int* num){
	int a;
	a= *num;
	int q,r,rev_num;
	q= a/10;
	r= a%10;
	rev_num= r*100;
	r= q%10;
	q= q/10;
	rev_num= rev_num+r*10+q;
	return rev_num;
}
