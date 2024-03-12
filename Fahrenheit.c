#include <stdio.h>

int main(){
    float celcius, fah, kelvin;
    celcius = 25.5;

    fah = (celcius*9/5)+32;
    kelvin = celcius + 273.15;

    printf("Temperatura em celcius: %f\n", celcius);
    printf("Temperatura em Fahrenheit: %f\n", fah);
    printf("Temperatura em Kelvin: %f", kelvin);

    return 0;
}
