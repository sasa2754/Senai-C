#include <stdio.h>
#include <Windows.h>

int main(){
    int senha = 1234567891011121314, tentativas=5, numDigitado=0, tempo=0;
    printf("Voce tem 5 tentativas para acertar a senha, boa sorte!\n");
    while(1){
        printf("Digite um numero: \n");
        scanf("%i", &numDigitado);
        if(numDigitado==senha){
            printf("Parabens, você desarmou a bomba!");
            break;
        }
        else{
            tentativas -= 1;
            if(tentativas == 0){
                printf("Eu avisei!");
                while(tempo<10000000000){
                    if(tempo%2==0){
                        system("color C4");
                        printf("*");
                    }
                    else{
                        system("color 24");
                        printf("*");
                    }
                    tempo+=1;
                }
            }
            else{
                printf("Voce errou, ainda tem %i tentativas\n", tentativas);
            }
        }
    }

    return 0;
}