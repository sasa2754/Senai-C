#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdLinhas = 0, i = 1;
    char *leitura;
    FILE * arquivo;
    arquivo = fopen("arquivo.txt", "r");

    printf("Quantas linhas tem o arquivo? ");
    scanf("%i", &qtdLinhas);

    char *linha = malloc(qtdLinhas * sizeof(char));
    while (i-1<qtdLinhas){
        leitura = fgets(linha, 100, arquivo);
        // printf("%s", linha);
        if(leitura){
            printf("Linha %i: %s", i, leitura);
        }
        i++;
    }
    
    
    free(linha);
    fclose(arquivo);
    return 0;
}