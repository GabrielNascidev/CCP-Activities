#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL , "");
    float rendaMensal;
    int nomeLimpo;

    printf("====== BANCO DO GABGAB ======");
    printf("\n-Seja bem vindo ao banco GabGab!");
    printf("\n-Ficamos sabendo que o sr(a) esta");
    printf("\nquerendo fazer um emprestimo com a gente!");
    printf("\n\n-Podemos lhe ajudar com isso, porem");
    printf("\nprimeiro precisamos analisar como anda sua vida!");

    printf("\n\nResponda:");
    printf("\n-Qual a sua renda mensal?: R$");
    scanf("%f" , &rendaMensal);
    printf("\nOk, agora me responda:");
    printf("\nO seu nome esta limpo? 1(sim) 0(nao): ");
    scanf("%d" , &nomeLimpo);

    if( rendaMensal >= 3000 && nomeLimpo == 1 ){
        printf("\nPROCESSANDO...");
        printf("\nEmprestimo APROVADO!!");
    }else{
        printf("\nPROCESSANDO...");
        printf("\nEmprestimo NEGADO!!");
    }

    return 0;
}