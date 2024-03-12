#include <stdio.h>

int main(){
    char nome[21], sobrenome[21], data[11], cpf[20];

    printf("Digite seu primeiro e segundo nome: \n");
    scanf("%s",nome);
    scanf("%s",sobrenome);
    // printf("%s %s",nome,sobrenome);

    printf("Digite sua data de nascimento: \n");
    scanf("%s",data);
    printf("Digite seu CPF: \n");
    scanf("%s",cpf);

    printf("%s, nascido em %s, com CPF de número %s, está se formando em TDS.",nome,data,cpf);


    return 0;
    
}