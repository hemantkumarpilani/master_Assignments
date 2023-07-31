//Length Of String
#include<stdio.h>
void mystrlen (char*);
void main (){
	int n;
	printf("Enter size of string \n");
	scanf("%d",&n);
	char string[n];
	printf("Enter string \n");
	scanf("%s",&string);
	mystrlen(string);
}
void mystrlen(char *string){
	int i=0;
	while (string[i]!= '\0'){
		i++;
	}
	printf("Length of string is = %d \n",i);
}
