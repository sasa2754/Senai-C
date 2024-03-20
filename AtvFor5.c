#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);

    for (int i = 0; i<=100; i++){
        if(i%num==0){
            printf("%i\n",i);
        }
    }
    return 0;
}