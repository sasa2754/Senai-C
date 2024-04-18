#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd, soma = 0;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%i", &qtd);

    int *vetor = malloc(qtd * sizeof(int));

    for(int i=0;i<qtd;i++){
        printf("Digite um numero para a posicao [%i]: ", i);
        scanf("%i", &vetor[i]);
    }
    for(int i=0;i<qtd;i++){
        printf("%i ", vetor[i]);
        if(vetor[i]%2 != 0){
            soma+=vetor[i];
        }
        printf("A soma dos numeros impares e: %i", soma);
    }

    free(vetor);
    return 0;
}

