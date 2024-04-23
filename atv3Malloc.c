#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdChar;

    printf("Qual a qtd de caracteres voce vai inserir: ");
    scanf("%i", &qtdChar);

    char *palavra = malloc(qtdChar * sizeof(char));

    printf("Digite a palavra: ");
    scanf("%s", palavra);
    if(sizeof(palavra) > qtdChar){
        printf("Palavra inserida maior do que o espaco alocado!");
    }
    else{
        printf("%s", palavra);
    }

    free(palavra);
    return 0;
}