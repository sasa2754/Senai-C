#include <stdio.h>

int main(){
    int respostas[10][2];

    printf("===========================================Relacione as colunas===========================================\n");
    printf("1. ()Qual e a capital de Cuba?\t\t\t\t\t\t(1)Dom Quixote\n");
    printf("2. ()O que e muito pesado?\t\t\t\t\t\t(2)7\n");
    printf("3. ()Quem e o homem mais lindo do mundo?\t\t\t\t(3)118\n");
    printf("4. ()Quem e o melhor professor do mundo?\t\t\t\t(4)Essa barra que e gostar de vc\n");
    printf("5. ()Qual e a mulher mais perfeita que existe?\t\t\t\t(5)Vaticano\n");
    printf("6. ()Qual e o menor pais do mundo?\t\t\t\t\t(6)Nicolas\n");
    printf("7. ()Qual e o segundo livro mais vendido do mundo?\t\t\t(7)Havana\n");
    printf("8. ()Quantos elementos quimicos tem na tabela periodica?\t\t(8)Sabrina\n");
    printf("9. ()Traducao de legend?\t\t\t\t\t\t(9)Andrey\n");
    printf("10.()Qual e o numero minimo de jogadores de futebol numa partida?\t(10)Lenda\n");
    printf("==========================================================================================================\n");
    respostas[0][0] = 7, respostas[1][0] = 4, respostas[2][0] = 9, respostas[3][0] = 6, respostas[4][0] = 8, respostas[5][0] = 5, respostas[6][0] = 1, respostas[7][0] = 3, respostas[8][0] = 10, respostas[9][0] = 2;

    for (int i=0;i<10;i++){
        printf("Relacione a resposta %i: ", i+1);
        scanf("%i", &respostas[i][1]);
    }
    printf("\n");
    for (int i = 0;i<10;i++){
        if(respostas[i][0] == respostas[i][1]){
            printf("Voce acertou a pergunta %i!", i+1);
        }
        else{
            printf("Voce errou a pergunta %i :(", i+1);
        }
        printf("\n");
    }

}