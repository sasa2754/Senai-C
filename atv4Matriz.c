#include <stdio.h>

int main(){
    int matriz1[3][2], matriz2[3][2], soma = 0;
    
    
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("Digite o numero do indice [%i][%i] da matriz 1: ",i,j);
            scanf("%i", &matriz1[i][j]);
        }
    }
    
    printf("\n");

    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("Digite o numero do indice [%i][%i] da matriz 2: ",i,j);
            scanf("%i", &matriz2[i][j]);
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            soma += matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("Matriz 1: \n");
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("%i ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2: \n");
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("%i ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma de tudo: %i", soma);
    return 0;
}