#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int main(){
    setlocale(LC_ALL , "");

    int temp , escolhaJogador , cor;

    printf("       ===== Games GabGab =====\n");
    printf("-Olá seja bem vindo, hoje você irá jogar\n");
    printf("um jogo bem interessante e legal chamado:\n\n");
    printf("       ==== Bomba Relogio ====");
    printf("\nREGRAS DO JOGO:\n");
    printf("1- Você terá 10 segundos para tomar sua decisão!!\n");
    printf("2- Apenas uma das 4 cores é a certa!!\n");
    printf("3- Morrer é uma escolha sua!!");
    printf("\n\n-Então, vai encarar? 1(sim) 0(não): ");
    scanf("%d" , &escolhaJogador);

    if( escolhaJogador == 1){

        printf("\nEntão vamos começar, TEMPO NA TELAA!!\n");

        for( temp = 10 ; temp >= 0 ; temp--){
        printf("-%d\n" , temp);
        sleep(1);
    }

    printf("\n-Agora escolha apenas 1 das cores abaixo:");
    printf("\n[1] - VERMELHO   [2] - AZUL");
    printf("\n[3] - AMARELO    [4] - VERDE");
    printf("\nSua escolha: ");
    scanf("%d" , &cor);

    switch(cor){
        case 1:
            printf("\nBUMMMMMMMMMM!!");
            printf("\nCor errada VOCÊ MORREU!");
        break;
        case 2:
            printf("\nBUMMMMMMMMMM!!");
            printf("\nCor errada VOCÊ MORREU!");
        break;
        case 3:
            printf("\nBUMMMMMMMMMM!!");
            printf("\nCor errada VOCÊ MORREU!");
        break;
        case 4:
            printf("\nBOMBA DESARMADA!!");
            printf("\nCor certa VOCÊ SAIU VIVO!");
        break;
        default:
            printf("\nOpção inválida! Você morreu!");
        break;
    }

    }else{
        printf("\n-Peidou na maionese MEDROSO!");
    }
  

    return 0;
}