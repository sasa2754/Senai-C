#include <stdio.h>

int main(){
    int num1, num2, num3,soma = 0;
    // printf("Digite o primeiro numero: ");
    // scanf("%i", &num1);
    // printf("Digite o segundo numero: ");
    // scanf("%i", &num2);
    // printf("Digite o terceiro numero: ");
    // scanf("%i", &num3);
    // soma = num1+num2+num3;
    while (soma!= 45){
        printf("==========Soma 45==========\n");
        printf("Digite o primeiro numero: ");
        scanf("%i", &num1);
        printf("Digite o segundo numero: ");
        scanf("%i", &num2);
        printf("Digite o terceiro numero: ");
        scanf("%i", &num3);
        soma = num1+num2+num3;
        
    }
    printf("A soma e igual a 45!");
    
    return 0;
}