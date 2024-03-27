#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

    int deposito(int valorDepositado, int saldoAtual){
        saldoAtual += valorDepositado;
        printf("Novo saldo e de: R$%i,00",saldoAtual);
        return saldoAtual;
    }

    int saque(int valorSacado, int saldoAtual){
        if (valorSacado>saldoAtual){
            printf("Saldo insuficiente!");
            return saldoAtual;
        }
        else{
            saldoAtual -= valorSacado;
            printf("Saque realizado!\nNovo saldo e de R$%i,00", saldoAtual);
            return saldoAtual;
        }
    }

    int saberSaldo(int saldoAtual){
        printf("Seu saldo atual e: R$%i,00\n", saldoAtual);
        return saldoAtual;
    }

    int emprestimo(int valorEmprestado, int saldoAtual){
        if (valorEmprestado>saldoAtual*3){
            printf("Voce nao pode fazer um emprestimo nesse valor, o valor maximo e de: R$%i,00",saldoAtual*3);
            return saldoAtual;
        }
        else{
            saldoAtual += valorEmprestado;
            printf("Emprestimo realizado com sucesso!\nNovo saldo: R$%i,00",saldoAtual);
            return saldoAtual;
        }
    }

#endif