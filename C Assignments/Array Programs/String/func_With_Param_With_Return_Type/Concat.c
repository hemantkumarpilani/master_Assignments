//Concatination two strings
#include<stdio.h>
#include<string.h>
char* mystrconcat(char*,char*);
void main (){
	char str1[15],str2[10];
	printf("Enter 1st string \n");
	scanf("%s",str1);
	printf("Enter 2nd string \n");
	scanf("%s",str2);
	printf("String1 after concatination is = %s \n",mystrconcat(str1,str2));
}
char* mystrconcat(char* str1, char* str2){
	int i,j;
	int str1len= strlen(str1);
	int length= str1len+strlen(str2);
	for (i=str1len,j=0;i<length;i++,j++){
		str1[i]= str2[j];	
	}
	str1[i]= '\0';
	return str1;
}
