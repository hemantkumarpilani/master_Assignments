//farenheit from celcius
#include<stdio.h>
int temperature_conversion(float*);
void main (){
	float celcius,a;
	printf("Enter temperature in degee celcius \n");
	scanf("%f",&celcius);
	a= temperature_conversion(&celcius);
	printf("Tempreature in farenheite is = %fF \n",a);
}
int temperature_conversion(float* celcius){
	float farenheite,a;
	a= *celcius;
	farenheite= (a*(9.0/5))+32;
	return farenheite;
}
