#include <stdio.h>

int main(){
    int celsius = 0, fahrenheit = 0, temperatura = 0, escolha = 1;
    while (escolha != 0){
        printf("================Temperatura===============");
        printf("Você gostaria de converter como?\n\t1 - Celsius = Fahrenheit\n\t2 - Fahrenheit = Celcius\n\t0 - Sair\n");
        scanf("%i",&escolha);
        switch (escolha)
        {
            case 1:
                printf("Digite a temperatura em celsius: \n");
                scanf("%i",&celsius);
                fahrenheit = (celsius*9/5) + 32;
                printf("A temperatura em Fahrenheit é: %i\n", fahrenheit);
                temperatura = (fahrenheit > 90) ? printf("A temperatura está muito alta\n"): printf("A temperatura está normal!\n");
                // printf("%d",temperatura);
                break;
            case 2:
                printf("Digite a temperatura em Fahrenheit: \n");
                scanf("%i",&fahrenheit);
                celsius = (fahrenheit - 32)*5/9;
                printf("A temperatura em Celsius é: %i\n",celsius);
                temperatura = (celsius > 30) ? printf("A temperatura está muito alta\n"): printf("A temperatura está normal!\n");
                break;
            case 0:
                printf("Tchau!");
                break;
            default:
                printf("Valor inválido\n");
                break;
        }
    }
}