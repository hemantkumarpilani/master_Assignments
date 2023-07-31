//farenheit from celcius
#include<stdio.h>
float temperature_conversion(int);
void main (){
	float celcius,farenheite;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	farenheite= temperature_conversion(celcius);
	printf("Tempreature in farenheite is = %fF \n",farenheite);
}
float temperature_conversion(int celcius){
	float farenheite;
	farenheite= (celcius*(9.0/5))+32;
	return farenheite;
}
