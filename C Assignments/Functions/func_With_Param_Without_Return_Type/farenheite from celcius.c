//farenheit from celcius
#include<stdio.h>
void temperature_conversion(int);
void main (){
	float celcius;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	temperature_conversion(celcius);
}
void temperature_conversion(int celcius){
	float farenheite;
	farenheite= (celcius*(9.0/5))+32;
	printf("Tempreature in farenheite is = %fF \n",farenheite);
}
