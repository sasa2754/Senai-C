#include <stdio.h>

int num;

int tabuada(int num, int c){
    if (c == 11){
        return 1;
    }
    else{
        printf("%i * %i = %i\n", num, c, num*c);
        return tabuada(num, c+1);
    }
}
int main(){
    printf("Insira um numero: ");
    scanf("%i", &num);
    tabuada(num,0);
    
    return 0;
}
