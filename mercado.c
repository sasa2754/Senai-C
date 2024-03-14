#include <stdio.h>

int main(){
    int escolhaSetor,escolhaFrios,escolhaPadaria,escolhaAcougue,escolhaBebidas,valorCompra, valorPago, calote;
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
            valorCompra += 5;
            break;
        case 2: //Presunto
            valorCompra += 6;
            break;
        case 3: //QueijuntoPreso
            valorCompra += 90;
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
            valorCompra += 8;
            break;
        case 2: //Sonho
            valorCompra += 999999;
            break;
        case 3: //Quindim
            valorCompra += 10;
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
            valorCompra += 70;
            break;
        case 2: //Alcatra
            valorCompra += 50;
            break;
        case 3: //Frango
            valorCompra += 30;
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
            valorCompra += 1;
            break;
        case 2: //Monster
            valorCompra += 99;
            break;
        case 3: //Pepsi
            valorCompra += 7;
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
    printf("O valor da sua compra deu: %i,00\n",valorCompra);
    printf("Por favor insira o dinheiro: ");
    scanf("%i",&valorPago);

    if (valorPago == valorCompra){
        printf("\nCertinho, obrigado!");
    }
    else if (valorPago > valorCompra){
        printf("\nAqui está seu troco: %i,00",(valorCompra-valorPago));
    }
    else if (valorPago < valorCompra){
        printf("\nTa querendo me passar a perna? Ainda faltam %i reais, pode pagar o que falta!",(valorPago-valorCompra));
        scanf("%i",&calote);
        valorPago += calote;
        if (valorPago == valorCompra){
            printf("\nCertinho, obrigado!");
        }
        else if (valorPago > valorCompra){
            printf("\nAqui está seu troco: %i,00",(valorCompra-valorPago));
        }
        else if (valorPago < valorCompra){
            printf("Você ta tentando me enganar mais uma vez? Vai embora da minha loja!");
        }
        else{
            ("Insira um número válido!");
        }
    }
    else{
            ("Insira um número válido!");
        }
}
