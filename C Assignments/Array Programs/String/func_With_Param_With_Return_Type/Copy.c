//Copy of 1 string into another
#include<stdio.h>
#include<string.h>
char* mystrcpy(char*,char*);
void main (){
	char string1[10], string2[10];
	printf("Enter string1 \n");
	scanf("%s",&string1);
	printf("String 2 after copy is = %s \n",mystrcpy(string2,string1));
}
char* mystrcpy(char *string2, char*string1){
	int i=0;
	while(string1[i]!='\0'){
		string2[i]= string1[i];
		i++;
	}
	string2[i]= '\0';
	return string2;
}
