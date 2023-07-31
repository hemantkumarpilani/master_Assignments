//Length Of String
#include<stdio.h>
int mystrlen (char*);
void main (){
	int n;
	printf("Enter size of string \n");
	scanf("%d",&n);
	char string[n];
	printf("Enter string \n");
	scanf("%s",&string);
	printf("Length of string is = %d \n", mystrlen(string));
}
int mystrlen(char *string){
	int i=0;
	while (string[i]!= '\0'){
		i++;
	}
	return i;
}
