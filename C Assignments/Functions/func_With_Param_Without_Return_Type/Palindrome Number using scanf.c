// Reverse of no and check no is palindrome or not
#include<stdio.h>
void rev_number(int);
void main(){
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	rev_number(num);
}
void rev_number(int num){
	int q,r,rev_num;
	q= num/10;
	r= num%10;
	rev_num= r*100;
	r= q%10;
	q= q/10;
	rev_num= rev_num+r*10+q;
	printf("The Reverse number is = %d \n",rev_num);
	if (rev_num==num){
		printf("No is palindrome \n");
	}
	else {
		printf("No is not palindrome \n");
	}
}
