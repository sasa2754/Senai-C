#include <stdio.h>

int main(){
    int qtd, contagem=0;
    printf("Insira um valor: \n");
    scanf("%i", &qtd);

    for (int i = 1; i <= qtd;i++){
        for (int j = 1; j <= i; j++){
            if(i%j == 0){
                contagem += 1;
            }
            else{

            }
        }
        if (contagem == 2){
            printf("The number %i is primo\n", i);
        }
        else{
            printf("The number %i not is primo\n", i);
        }
        contagem = 0;
    }
    return 0;
}