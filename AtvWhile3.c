#include <stdio.h>
#include <Windows.h>

int main(){
    int escolha,valor=0,contador = 0;
    printf("O que voce gostaria de comprar?\n\t1 - Batata\n\t2 - Pudim da Bosch\n\t3 - Banana\n");
    scanf("%i",&escolha);
    if(escolha == 1){
        printf("Ok, processando");
        while (contador<10){
            printf(".");
            Sleep(500);
            contador+-1;
        }
    }
    else if(escolha == 2){
        printf("Ok, processando");
        while (contador<10){
            printf(".");
            Sleep(500);
            contador+=1;
        }
    }
    else if(escolha == 3){
        printf("Ok, processando");
        while (contador<10){
            printf(".");
            Sleep(500);
            contador+-1;
        }
    }
    else{
        printf("Escolha um valor valido!");
    }
    printf("\nCompra concluida!");
    return 0;
}