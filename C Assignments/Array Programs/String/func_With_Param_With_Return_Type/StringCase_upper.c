//lower case string into Upper case
#include<stdio.h>
char* mystr_lwr(char*);
void main (){
	char str1[10];
	char* ptr;
	printf("Enter string \n");
	scanf("%s",&str1);
	ptr= mystr_lwr(str1);
	printf("Lower case string is = %s \n",str1);
}
char* mystr_lwr(char* str1){
	int i;
	for (i=0;str1[i]!='\0';i++){
		if (str1[i]>='a' && str1[i]<='z'){
		str1[i]= str1[i]-32;	
		}
		else {
		str1[i]= str1[i];
		}	
	}
	return str1;
}
