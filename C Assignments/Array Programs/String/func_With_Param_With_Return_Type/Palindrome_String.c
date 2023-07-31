#include<stdio.h>
#include<string.h>
char* mystr_rev(char*);
void main (){
	char str1[20],str2[20];
	int i;
	char* ptr;
	printf("Enter string \n");
	scanf("%s",&str1);
	strcpy(str2,str1);
	ptr= mystr_rev(str1);
	printf("Reverse string is = %s \n",str1);
	for (i=0;i<strlen(str1);i++){
		if (str2[i]==str1[i]){
			if (i==strlen(str1)-1){
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
char* mystr_rev(char* str1){
	int len1,i=0;
	char temp;
	len1= strlen(str1);
	while (i<(len1/2)){
		temp= str1[i];
		str1[i]= str1[len1-i-1];
		str1[len1-i-1]= temp;
		i++;
	}
	return str1;	
}
