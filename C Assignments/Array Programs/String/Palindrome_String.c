// Palindrome String or not
#include<stdio.h>
#include<string.h>
void main (){
	char str1[20],temp,str2[20];
	printf("Enter string \n");
	scanf("%s",&str1);
	strcpy(str2,str1);
	int i=0,len1;
	len1= strlen(str1);
	while (i<(len1/2)){
		temp= str1[i];
		str1[i]= str1[len1-i-1];
		str1[len1-i-1]= temp;
		i++;
	}
	printf("Reverse string is = %s \n",str1);
	for (i=0;i<len1;i++){
		if (str2[i]==str1[i]){
			if (i==len1-1){
				printf("Strings are same \n");
			}
		}
		else {
			if (str2[i]!=str1[i]){
				printf("Strings are not same \n");
				break;
			}
		}
	}
}
