#include <stdio.h>

int main(){
    int contagem=0;

    for (int i = 1; i <= 100;i++){
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