#include <stdio.h>

int main()
{
   float celsius = 37.5;
   float fahrenheit = (celsius * 9.0/5.0) + 32.0 ;
   float kelvin = celsius + 273.15;
   
   printf("======================================TEMPRATURE CONVERSION====================\n");
   printf("Temperature in Celsius:        %.2f ℃\n", celsius);
   printf("Temperature in Fahrenheit:     %.2f ºF\n", fahrenheit);
   printf("Temperature in Kelvin:         %.2f K\n", kelvin);
        	return 0;
