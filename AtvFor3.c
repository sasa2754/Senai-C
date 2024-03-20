#include <stdio.h>

int main(){
    int qtd, total = 0;
    printf("Insira um valor para a tabuada: ");
    scanf("%i", &qtd);
    for (int i = 1; i <= 10;i++){
        total = i*qtd;
        printf("%i * %i = %i\n", i, qtd, total);
    }

    return 0;
}