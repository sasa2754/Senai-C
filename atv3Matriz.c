#include <stdio.h>

int main(){
    float notas[2][4], soma = 0, media = 0;

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("Enter the number: ");
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

     for (int i=0;i<2;i++){
        soma = 0;
        media = 0;
        for (int j=0;j<3;j++){
            soma+=notas[i][j];
        }
        media = soma/3;
        notas[i][3] = media;
    }

    for (int i=0;i<2;i++){
            printf("Media: %.1f\n", notas[i][3]);
    }

    return 0;
}