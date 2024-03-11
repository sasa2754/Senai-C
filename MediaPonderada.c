#include <stdio.h>

int main(){
    float num1, num2, num3, total;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    total =((num1*2)+(num2*3)+(num3*5))/10;

    printf("A média ponderada das notas é: %.1f", total);

    return 0;
}