// Reverse of no and check no is palindrome or not
#include<stdio.h>
int rev_number(int);
void main(){
	int num,rev_num1;
	printf("Enter number \n");
	scanf("%d",&num);
	rev_num1= rev_number(num);
	if (rev_num1==num){
		printf("No is palindrome \n");
	}
	else {
		printf("No is not palindrome \n");
	}
}
int rev_number(int num){
	int q,r,rev_num;
	q= num/10;
	r= num%10;
	rev_num= r*100;
	r= q%10;
	q= q/10;
	rev_num= rev_num+r*10+q;
	return rev_num;
}
