#include <stdio.h>

int main(){
    int qtdValores=0,soma=0,media=0;
    printf("Enter a number: ");
    scanf("%i", &qtdValores);
    for (int i=1;i<=qtdValores;i++){
        soma +=i;
    }
    media = soma/qtdValores;
    printf("The average of the numbers is: %i", media);
    return 0;
}