//Reverse of number using for loop
#include<stdio.h>
int rev_num(int);
void main (){
	int a,b;
	printf("Enter number \n");
	scanf("%d",&a);
	b= rev_num(a);
	printf("The reverse number is = %d \n",b);
}
int rev_num(int a){
	int b,i,r,rev_num=0,n=0;
	b=a;
	while (b>0){	
		b=b/10;
		n=n+1;	
	}
	for (i=0;i<n;i++){
		r=a%10;
		rev_num=rev_num*10+r;
		a=a/10;
	}
	return rev_num;
}
