//Compare two strings
#include<stdio.h>
#include<string.h>
void mystrcmp(char*,char*);
void main (){
	char string1[50], string2[50];
	printf("Enter string1 \n");
	scanf("%s",&string1);
	printf("Enter string2 \n");
	scanf("%s",&string2);
	mystrcmp(string1,string2);
}
void mystrcmp(char* string1, char* string2){
	int i=0;
	int len1= strlen(string1);
	while (i<=len1){
		if (string1[i]==string2[i]){
			if ((string1[i]=='\0')&&(string2[i]=='\0')){
				printf("Both the strings are same \n");
				break;
			}
			i++;
		}
		else {
			printf("Both the strings are not same \n");
			break;
		}
	}
}
