#include <stdio.h>

int main(){
    int num1, num2, escolha, total, casas;


    while (escolha != 0){
        printf("\nDigite o primeiro número: ");
        scanf("%i",&num1);
        printf("Digite o segundo número: ");
        scanf("%i",&num2);
        printf("Escolha a operação que você quer fazer:\n\t1 - OR\n\t2 - AND\n\t3 - NOT\n\t4 - XOR\n\t5 - LEFT SHIFT\n\t6 - RIGHT SHIFT\n\t0 - SAIR\n\n");
        scanf("%i",&escolha);

        if (escolha == 1){ //OR
            total = num1 | num2;
            printf("Total: %i\n", total);
        }
        else if (escolha == 2){ //AND
            total = num1 & num2;
            printf("Total: %i\n", total);
        }
        else if (escolha == 3){ //NOT
            total = ~num1;
            printf("Total do numero %i: %i\n",num1,total);
            total = ~num2;
            printf("Total do numero %i: %i\n",num2,total);
        }
        else if (escolha == 4){//XOR
            total = num1^num2;
            printf("Total: %i\n", total);
        }
        else if (escolha == 5){ //LEFT SHIFT
            printf("Quantas casas você gostaria de pular? \n");
            scanf("%i", &casas);

            total = num1 << casas;
            printf("O total do número %i: %i\n",num1,total);
            total = num2 << casas;
            printf("O total do número %i: %i\n",num2,total);
        }
        else if (escolha == 6){ //RIGHT SHIFT
            printf("Quantas casas você gostaria de pular? \n");
            scanf("%i", &casas);

            total = num1 >> casas;
            printf("O total do número %i: %i\n",num1,total);
            total = num2 >> casas;
            printf("O total do número %i: %i\n",num2,total);
        }
        else if (escolha == 0){
            printf("Tchau!");
        }
        else{
            printf("Digite um número válido!!!!!!!!!!!!\n");
        }
    
    }
    return 0;
}