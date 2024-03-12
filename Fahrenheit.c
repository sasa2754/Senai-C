#include <stdio.h>

int main(){
    float celcius, fah;
    celcius = 25.5;

    fah = (celcius*9/5)+32;

    printf("Temperatura em celcius: %f\n", celcius);
    printf("Temperatura em Fahrenheit: %f", fah);
    return 0;
}