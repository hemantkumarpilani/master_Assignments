//Concatination two strings
#include<stdio.h>
#include<string.h>
void mystrconcat(char*,char*);
void main (){
	char str1[50],str2[30];
	printf("Enter 1st string \n");
	scanf("%s",str1);
	printf("Enter 2nd string \n");
	scanf("%s",str2);
	mystrconcat(str1,str2);
}
void mystrconcat(char* str1, char* str2){
	int len1= strlen(str1);
	int len2= strlen(str2);
	int i= 0;
	while (i<(len1+len2)){
		str1[i+len1]= str2[i];
		i++;
	}
	str1[i]= '\0';
	printf("String1 after concatination is = %s \n",str1);
	
}
