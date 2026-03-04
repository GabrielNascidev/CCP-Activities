#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float saldo = 1000.0;
    float debito, credito, saldoAtual;

    printf("SEU SALDO ATUAL É DE: R$%.2f !!\n", saldo);

    printf("\nQuantos reais você gastou no débito?: R$");
    scanf("%f", &debito);

    printf("\nQuantos reais você gastou no crédito?: R$");
    scanf("%f", &credito);

    saldoAtual = saldo - (debito + credito);

    printf("\nSEU SALDO ATUAL É DE: R$%.2f !!\n", saldoAtual);

    if ( saldoAtual <= 0 )
    {
        printf("SALDO NEGATIVO!!");
    }else{
        printf("SALDO POSITIVO!!");
    }
    


    return 0;
}