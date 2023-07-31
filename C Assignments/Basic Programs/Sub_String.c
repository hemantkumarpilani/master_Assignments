#include<stdio.h>
void main (){
	char string[50],search_string[50];
	printf("Enter string \n");
	scanf("%[^\n]%*c",&string);
	printf("String is = %s \n",string);
	printf("Enter search string \n");
	scanf("%[^\n]%*c",&search_string);
	int i,j;
	for (i=0,j=0;i<50;i++){
		if(search_string[j]==string[i]){
			j++;
			if (search_string[j]=='\0'){
				printf ("Search string is present in entire string \n");
				break;
			}
		}
		else if (i==49){
			printf("Enter a vaid search string \n");
		}
	}
}
