#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numAleatorio = rand() % 1000 + 1, numUsuario;

    printf("Enter a number:\n");
    scanf("%i", &numUsuario);

    while (numUsuario!=numAleatorio){
        printf("Enter a number: ");
        scanf("%i", &numUsuario);

        if(numUsuario>numAleatorio){
            printf("Enter a smaller number\n");
        }
        else{
            printf("Enter a larger number\n");
        }
    }
    printf("Congratulations!");
    return 0;
}