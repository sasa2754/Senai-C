#include <stdio.h>
#ifndef BINARY_H
#define BINARY_H

    int OR(int num1, int num2){
        int total;
        total = num1 | num2;
        printf("Total: %i\n", total);
        return total;
    }
    int AND(int num1, int num2){
        int total;
        total = num1 & num2;
        printf("Total: %i\n", total);
        return total;
    }
    int NOT(int num1, int num2){
        int total;
        total = ~num1;
        printf("Total do numero %i: %i\n",num1,total);
        total = ~num2;
        printf("Total do numero %i: %i\n",num2,total);
        return total;
    }
    int XOR(int num1, int num2){
        int total;
        total = num1^num2;
        printf("Total: %i\n", total);
        return total;
    }
    int leftShift(int num1, int num2){
        int total, casas;
        printf("Quantas casas você gostaria de pular? \n");
        scanf("%i", &casas);

        total = num1 << casas;
        printf("O total do número %i: %i\n",num1,total);
        total = num2 << casas;
        printf("O total do número %i: %i\n",num2,total);
        return total;
    }
    int rightShift(int num1, int num2){
        int total, casas;
        printf("Quantas casas você gostaria de pular? \n");
        scanf("%i", &casas);

        total = num1 >> casas;
        printf("O total do número %i: %i\n",num1,total);
        total = num2 >> casas;
        printf("O total do número %i: %i\n",num2,total);
        return total;
    }


#endif
