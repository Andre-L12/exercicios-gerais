#include <stdio.h>
#include "temperature_conversor.h"

int main(){
    float temperature;
    char medida1,medida2;
    scanf("%f %c %c",&temperature,&medida1,&medida2);
    if(medida1=='f') {
        if(medida2=='k')  printf("Temperature: %.2fK",convert_fahrenheit_to_kelvin(temperature));
        else printf("Temperature: %.2fCº",convert_fahrenheit_to_celsius(temperature));
    }
    else if(medida1=='c') {
        if(medida2=='k')  printf("Temperature: %.2fK",convert_celsius_to_kelvin(temperature));
        else printf("Temperature: %.2fFº",convert_celsius_to_fahrenheit(temperature));
    }
    else if(medida1=='k') {
        if(medida2=='c')  printf("Temperature: %.2fCº",convert_kelvin_to_celsius(temperature));
        else printf("Temperature: %.2fFº",convert_kelvin_to_fahrenheit(temperature));
    }

    return 0;
}