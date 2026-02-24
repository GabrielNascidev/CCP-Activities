#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char conta[10];
    int senha;

    bool acesso;
    acesso = false;

    float saque , resto , saldoAT;
    saldoAT = 200.00;

    printf("********* BANCO DO ABREU *********\n");
    printf(" --- Se ele não paga, nem eu ---\n");

    printf("Digite o número da conta: ");
    scanf("%s" , &conta);

    printf("Digite a senha da conta: ");
    scanf("%d" , &senha);

    if(strcmp(conta , "12345-6") == 0 && senha == 12345){
        printf("\nSEU SALDO ATUAL É DE R$ 200.00");
        acesso = true;
    }else{
        printf("\nCONTA OU SENHA INVALIDA !!!");
        return 0;
    }


    if(acesso == true){
        printf("\nDigite o valor para saque: R$");
        scanf("%f" , &saque);
    }

    
    if(saque <= 200 ){
        printf("\nSAQUE REALIZADO COM SUCESSO !!!");

        resto = saldoAT - saque;
        printf("\nSEU SALDO ATUAL É DE R$%.2f" , resto);
    }else{
        printf("\nNÃO FOI POSSIVEL REALIZAR O SAQUE.\n");
        printf("MOTIVO: SALDO INSUFICIENTE !!!");
    }


    return 0;
}