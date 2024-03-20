#include <stdio.h>

int main(){
    int qtd, total = 0;
    printf("Insira um valor para somar: ");
    scanf("%i", &qtd);

    for (int i = 1; i <=qtd;i++){
        total += i;
        printf("%i\n", total);
    }
    printf("Total: %i", total);

    return 0;
}