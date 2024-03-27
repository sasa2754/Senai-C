#include <stdio.h>
#include "banco.h"

int main(){

    FILE * arquivo;
    arquivo = fopen("Extrato.txt", "w");
    int escolha = 10, saldo = 0, divida = 0, depositar, sacar, emprestar, extrato, valor;

    printf("==========Bem vindo ao banco SasaMoney==========\n");
    printf("Insira o valor do seu primeiro deposito: ");
    scanf("%i", &saldo);
    
    while (escolha != 0){
        printf("\nO que voce gostaria de fazer?\n\t1 - Depositar\n\t2 - Sacar\n\t3 - Fazer um emprestimo\n\t4 - Consultar saldo\n\t0 - Sair\n");
        scanf("%i", &escolha);
        switch (escolha){
        case 1:
            printf("Quanto voce gostaria de depositar? ");
            scanf("%i", &valor);
            saldo = deposito(valor, saldo);
            fprintf(arquivo, "Depósito no valor de R$%i,00.\n", valor);
            break;
        case 2:
            printf("Quanto voce gostaria de sacar? ");
            scanf("%i", &valor);
            saldo = saque(valor, saldo);
            fprintf(arquivo, "Saque no valor de R$%i,00.\n", valor);
            break;
        case 3:
            printf("Quanto voce gostaria de emprestar? ");
            scanf("%i", &valor);
            saldo = emprestimo(valor,saldo);
            divida += valor;
            fprintf(arquivo, "Empréstimo no valor de R$%i,00.\n", valor);
            break;
        case 4:
            // printf("Saldo atual e de: R$%i,00\n", saldo);
            saberSaldo(saldo);
            break;
        case 0:
            fprintf(arquivo, "Saldo final: R$%i,00\nDívida final: R$%i,00", saldo, divida);
            printf("Tchau!");
            break;
            break;
        default:
            printf("Insira um numero valido!");
            break;
        }
    }

    fclose(arquivo);
    return 0;
}
