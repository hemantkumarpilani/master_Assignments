#include<stdio.h>
#include<string.h>
void main (){
	char string[20],search_string[20];
	printf("Enter string \n");
	scanf("%[^\n]%*c",&string);
	printf("String is = %s \n",string);
	printf("Enter search string \n");
	scanf("%[^\n]%*c",&search_string);
	int i,j;
	for (i=0,j=0;i<strlen(string);i++){
		if(search_string[j]==string[i]){
			j++;
			if (search_string[j]=='\0'){
				printf ("Search string is present in entire string \n");
				break;
			}
		}
		else if (i==strlen(string)-1){
			printf("Enter a vaid search string \n");
		}
	}
}
