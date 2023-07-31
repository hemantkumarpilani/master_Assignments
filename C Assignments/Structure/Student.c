#include<stdio.h>
struct student {
	int roll;
	char name [20];
	int marks;
};
void main (){
	struct student s1,s2;
	printf("Storing information of s1 student \n \n");
	printf("Enter roll no, name and marks \n");
	scanf("%d %s %d",&s1.roll, &s1.name,&s1.marks);
	printf("printing the s1 student information \n \n");
	printf("%s is having roll no %d scored %d percent marks \n \n",s1.name, s1.roll,s1.marks);
	printf("Storing information of s2 student \n \n");
	printf("Enter roll no, name and marks \n");
	scanf("%d %s %d",&s2.roll, &s2.name,&s2.marks);
	printf("printing the s1 student information \n \n");
	printf("%s is having roll no %d scored %d percent marks \n \n",s2.name, s2.roll,s2.marks);
}
