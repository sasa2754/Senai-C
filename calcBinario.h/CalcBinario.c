#include <stdio.h>
#include "Binary.h"

int main(){
    int escolha = 10, num1, num2, sair = 0;

    while(1){
        printf("Digite o primeiro numero: ");
        scanf("%i", &num1);
        printf("Digite o segundo numero: ");
        scanf("%i", &num2);
        printf("Escolha a operacao que voce quer fazer:\n\t1 - OR\n\t2 - AND\n\t3 - NOT\n\t4 - XOR\n\t5 - LEFT SHIFT\n\t6 - RIGHT SHIFT\n\t0 - SAIR\n\n");
        scanf("%i",&escolha);

        switch (escolha){
        case 1:
            OR(num1, num2);
            break;
        case 2:
            AND(num1, num2);
            break;
        case 3:
            NOT(num1, num2);
            break;
        case 4:
            XOR(num1, num2);
            break;
        case 5:
            leftShift(num1, num2);
            break;
        case 6:
            rightShift(num1, num2);
            break;
        case 0:
            printf("Tchau!");
            sair = 1;
            break;
        default:
            printf("Insira um numero valido!");
            break;
        }
        if(sair = 1){
            break;
        }

    }
    return 0;
}
