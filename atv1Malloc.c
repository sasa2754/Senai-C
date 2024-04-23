#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd = 0;

    printf("Insira um numero para ser a quantidade do array: ");
    scanf("%i", &qtd);

    int *array = malloc(qtd * sizeof(int));

    for (int i=0;i<qtd;i++){
        printf("Digite um numero para a posicao [%i]: ", i);
        scanf("%i", &array[i]);
    }
    for (int i=0;i<qtd;i++){
        printf("%i ", array[i]);
    }

    free(array);
    return 0;
}