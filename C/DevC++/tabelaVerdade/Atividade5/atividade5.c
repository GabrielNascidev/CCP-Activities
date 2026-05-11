#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "");
    int umiSolo , horaRegar;

    printf("==== Sistema de irrigação GabGab ====");
    printf("\n-Seja bem vindo ao sistema de");
    printf("\nirrigação automatica do GabGab!");

    printf("\n\n-Somos responsaveis pela ativação");
    printf("\ndo seu sistema de irrigação!");

    printf("\n\nVamos verificar:");
    printf("\n-A umidade do seu solo esta baixa? 1(sim) 0(nao): ");
    scanf("%d" , &umiSolo);
    printf("\n-Ja esta na hora marcada de regar? 1(sim) 0(nao): ");
    scanf("%d" , &horaRegar);

    printf("\nPROCESSANDO...");

    if(umiSolo == 1 || horaRegar == 1){
        printf("\nIrrigação Ativada!!");
    }else{
        printf("\nIrrigação Desligada!!");
    }

    return 0;
}