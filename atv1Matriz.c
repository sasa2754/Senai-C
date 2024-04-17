#include <stdio.h>

int main(){
    int matriz[4][4], soma = 0;

    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            printf("Enter the number: ");
            scanf("%i", &matriz[i][j]);
        }
    }
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            soma += matriz[i][j];
        }
    }
    printf("Total: %i", soma);
    return 0;
}