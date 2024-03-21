#include <stdio.h>

int main(){
    int saque=0,deposito=0,saldo=1000,escolha;

    while(1){
        printf("O que voce gostaria de fazer?\n\t1 - Saque\n\t2 - Deposito\n\t3 - Consultar saldo\n\t0 - Sair\n");
        scanf("%i",&escolha);
        if(escolha == 1){
            printf("Qual valor voce gostaria de sacar?\n");
            scanf("%i", &saque);
            while(saque<60){
                printf("Voce nao pode sacar um valor abaixo de R$60,00. Tente novamente!\n");
                scanf("%i",&saque);
            }
            if(saque>saldo){
                printf("Saldo insuficiente\n");
            }
            else{
                printf("Saque concluido\n");
                saldo-=saque;
            }
        }
        else if (escolha == 2){
            printf("Qual valor voce gostaria de depositar?\n");
            scanf("%i",&deposito);
            saldo+=deposito;
            printf("Deposito concluido. Novo saldo: R$%i,00\n",saldo);
        }
        else if(escolha == 3){
            printf("Seu saldo e de: R$%i,00\n",saldo);
        }
        else if(escolha == 0){
            printf("Tchau!");
            break;
        }
        else{
            printf("Por favor, insira um número valido\n");
        }
    }
    return 0;
}