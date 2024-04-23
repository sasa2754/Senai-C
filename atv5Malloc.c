#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd;

    printf("Digite a quantidade do array: ");
    scanf("%i", &qtd);

    int *array1 = malloc(qtd * sizeof(int));
    int *array2 = malloc(qtd * sizeof(int));
    int *soma = malloc(qtd * sizeof(int));

    for (int i=0;i<qtd;i++){
        printf("Digite o numero %i no array 1: ",i);
        scanf("%i", &array1[i]);
    }
    printf("\n");
    for (int i=0;i<qtd;i++){
        printf("Digite o numero %i no array 2: ",i);
        scanf("%i", &array2[i]);
    }
    for (int i=0;i<qtd;i++){
        soma[i] = array1[i] + array2[i];
    }
    printf("Array1: ");
    for (int i=0;i<qtd;i++){
        printf("%i ", array1[i]);
    }
    printf("\nArray2: ");
    for (int i=0;i<qtd;i++){
        printf("%i ", array2[i]);
    }
    printf("\nSoma: ");
    for (int i=0;i<qtd;i++){
        printf("%i ", soma[i]);
    }

    free(array1);
    free(array2);
    free(soma);
    return 0;
}