//farenheit from celcius
#include<stdio.h>
void main (){
	float farenheite,celcius;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	farenheite= (celcius*(9/5))+32;
	printf("Tempreature in farenheite is = %fF \n",farenheite);
}
