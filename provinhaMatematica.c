#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a, b,resposta,acertos = 0;
    FILE *arquivo = fopen("exercicios.txt","w");
    
    for (int i = 0; i<5;i++){
        a = rand() %100;
        b = rand() %100;

        printf("%i+%i=\n",a,b);
        fprintf(arquivo,"%i+%i=%i\n",a,b,a+b);
        scanf("%i",&resposta);
        if (resposta == a+b){
            printf("Você acertou!\n");
            acertos += 1;
        }
        else{
            printf("Você errou!\n");
        }
    }
    fprintf(arquivo,"Você acertou %i vezes.",acertos);
    fclose(arquivo);
    return 0;
}