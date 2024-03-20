#include <stdio.h>

int main(){
    for (int i=0;i<20;i++){
        printf("\n");
        for (int j=0;j<i+1;j++){
            printf("*");
        }
    }
    return 0;
}