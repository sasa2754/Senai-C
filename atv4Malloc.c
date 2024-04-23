#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha, coluna;

    printf("Digite a qtd de linhas: ");
    scanf("%i", &linha);
    printf("Digite a qtd de colunas: ");
    scanf("%i", &coluna);
    
    int **matriz = (int **)malloc(linha * sizeof(int *));
    for (int i=0;i<linha;i++){
        matriz[i] = (int *)malloc(coluna * sizeof(int));
    }
    
    for (int i=0;i<linha;i++){
        for (int j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i=0;i<linha;i++){
        for (int j=0;j<coluna;j++){
            printf("Matriz[%i][%i]: %i\n", i,j,matriz[i][j]);
        }
    }

    for(int i=0;i<linha;i++){
        free(matriz[i]);
    }
    free(matriz);


    
    return 0;
}