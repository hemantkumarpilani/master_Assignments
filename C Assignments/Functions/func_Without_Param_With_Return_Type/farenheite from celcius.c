//farenheit from celcius
#include<stdio.h>
float temperature_conversion();
void main (){
	float a;
	a=temperature_conversion();
	printf("Tempreature in farenheite is = %fF \n",a);
}
float temperature_conversion(){
	float farenheite,celcius;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	farenheite= (celcius*(9.0/5.0))+32;
	return farenheite;
}
