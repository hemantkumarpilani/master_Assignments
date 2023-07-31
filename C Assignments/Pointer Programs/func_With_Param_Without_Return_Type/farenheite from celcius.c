//farenheit from celcius
#include<stdio.h>
void temperature_conversion(float*);
void main (){
	float celcius;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	temperature_conversion(&celcius);
}
void temperature_conversion(float* celcius){
	float farenheite,a;
	a= *celcius;
	farenheite= (a*(9.0/5))+32;
	printf("Tempreature in farenheite is = %fF \n",farenheite);
}
