#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL , "");
    srand(time(NULL));

    int  dado1, dado2, soma, escolhaJogador, lancaDados = 1;

    printf("       ===== Games GabGab =====\n");
    printf("-Olá seja bem vindo, hoje você irá jogar\n");
    printf("um jogo bem interessante e legal chamado:\n\n");
    printf("     ==== Lançamento de Dados ====");
    printf("\nREGRAS DO JOGO:\n");
    printf("1- Se a soma dos dados for igual à 7 ou 11: VITÓRIA!!\n");
    printf("2- Se a soma dos dados for 2, 3 ou 12: DERROTA!!\n");
    printf("3- Se a soma dos dados for qualquer outro numero: 1 PONTO!!");
    printf("\n\n-Então, vai encarar? 1(sim) 0(não): ");
    scanf("%d" , &escolhaJogador);

    if(escolhaJogador == 1){
        printf("\nEntão vamos começar!");

        while(lancaDados == 1){
            printf("\n\n[1] - Lançar   [0] - Desistir : ");
            scanf("%d",&lancaDados);

            if(lancaDados == 1){
                dado1 = rand() % 6 + 1;
                dado2 = rand() % 6 + 1;
                soma = dado1 + dado2;

                printf("\nPrimeiro Dado: %d",dado1);
                printf("\nSegundo Dado: %d",dado2);
                printf("\nSoma dos Dados: %d",soma);

                if(soma == 7 || soma == 11){
                    printf("\n\nVITÓRIA!! Você acertou %d.\n", soma);
                    lancaDados = 0;
                } else if(soma == 2 || soma == 3 || soma == 12){
                    printf("\n\nDERROTA!! Você tirou %d.\n", soma);
                    lancaDados = 0;
                } else {
                    printf("\n\nVocê ganhou 1 PONTO! Tente novamente.\n");
                }

            } else {
                printf("\n-Nem se quer tentou PERDEDOR!!\n");
            }

        }

    } else {
        printf("\n-Peidou na maionese MEDROSO!");
    }

   

    return 0;

}