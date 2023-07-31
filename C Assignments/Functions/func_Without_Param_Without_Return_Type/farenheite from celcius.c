//farenheit from celcius
#include<stdio.h>
void temperature_conversion();
void main (){
	temperature_conversion();
}
void temperature_conversion(){
	float farenheite,celcius;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	farenheite= (celcius*(9.0/5))+32;
	printf("Tempreature in farenheite is = %fF \n",farenheite);
}
