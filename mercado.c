#include <stdio.h>

int main(){
    int escolhaSetor,escolhaFrios,escolhaPadaria,escolhaAcougue,escolhaBebidas,valorCompra;
    char listaCompras[4][3][15] = {
        {"Queijo","Presunto","QueijuntoPreso"},
        {"Pão","Sonho","Quindim"},
        {"Mignon","Alcatra","Frango"},
        {"Cachaça","Monster","Pepsi"}
    };
    char listaPreco[4][3][4] = {
        {5,6,90},
        {8,999999,10},
        {70,50,30},
        {1,99,7}
    };

    
    printf("Em qual setor você gostaria de comprar?\n\t1 - Frios\n\t2 - Padaria\n\t3 - Açougue\n\t4 - Bebidas");
    scanf("%i",&escolhaSetor);
    switch(escolhaSetor)
    {
    case 1: //Frios
        printf("Quais produtos você quer comprar?\n\t1 - Queijo\n\t2 - Presunto\n\t3 - QueijuntoPreso\n");
        scanf("%i",&escolhaFrios);
        switch (escolhaFrios)
        {
        case 1: //Queijo

            break;
        case 2: //Presunto

            break;
        case 3: //QueijuntoPreso

            break;

        default:
            printf("Número inválido");
            break;
        }
        break;


    case 2: //Padaria
        printf("Quais produtos você quer comprar?\n\t1 - Pão\n\t2 - Sonho\n\t3 - Quindim\n");
        scanf("%i",&escolhaPadaria);
        switch (escolhaPadaria)
        {
        case 1: //Pão

            break;
        case 2: //Sonho

            break;
        case 3: //Quindim

            break;

        default:
            printf("Número inválido");
            break;
        }
        break;
    
    case 3: //Açougue
        printf("Quais produtos você quer comprar?\n\t1 - Mignon\n\t2 - Alcatra\n\t3 - Frango\n");
        scanf("%i",&escolhaAcougue);
        switch (escolhaAcougue)
        {
        case 1: //Mignon

            break;
        case 2: //Alcatra

            break;
        case 3: //Frango

            break;

        default:
            printf("Número inválido");
            break;
        }
        break;

    case 4: //Bebidas
        printf("Quais produtos você quer comprar?\n\t1 - Cachaça\n\t2 - Monster\n\t3 - Pepsi\n");
        scanf("%i",&escolhaBebidas);
        switch (escolhaBebidas)
        {
        case 1: //Cachaça

            break;
        case 2: //Monster

            break;
        case 3: //Pepsi

            break;

        default:
            printf("Número inválido");
            break;
        }
        break;
    
    default:
        printf("Número inválido");
        break;
    }
}