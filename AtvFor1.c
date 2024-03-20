#include <stdio.h>

int main(){
    int qtd;
    printf("Insira um valor para o contador: ");
    scanf("%i", &qtd);
    for (int i = 0; i <=qtd;i++){
        if (i%2==0){
            printf("%i\n",i);
        }
    }

    return 0;
}