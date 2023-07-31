//lower case string into upper case
#include<stdio.h>
void main (){
	char str1[20];
	printf("Enter string \n");
	scanf("%s",&str1);
	int i;
	for (i=0;str1[i]!='\0';i++){
		if (str1[i]>='a' && str1[i]<='z'){
		str1[i]= str1[i]-32;	
		}
		else {
		str1[i]= str1[i];
		}	
	}
	printf("Upper case string is = %s \n",str1);
}
