//Compare two strings
#include<stdio.h>
#include<string.h>
int mystrcmp(char*,char*);
void main (){
	int i;
	char string1[10], string2[10];
	printf("Enter string1 \n");
	scanf("%s",&string1);
	printf("Enter string2 \n");
	scanf("%s",&string2);
	i= mystrcmp(string1,string2);
	if (i==0){
		printf("Both strings are same \n");
 	}
 	else {
 		printf("Strings are not same \n");
	 }
}
int mystrcmp(char* string1, char* string2){
	int i=0;
	int len1= strlen(string1);
	while (i<=len1){
		if (string1[i]==string2[i]){
			if ((string1[i]=='\0')&&(string2[i]=='\0')){
				i=0;
				break;
			}
			i++;
		}
		else {
			i=i-1;
			break;
		}
	}
	return i;
}
