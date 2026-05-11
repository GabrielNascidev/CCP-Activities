#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int TempCell , TempEstudo , Resultado ;

    printf("  ----- Batalha Final -----");
    printf("\n-Olá guerreiro, seja bem vindo ao");
    printf("\nsistema de combate do GabGab!!");
    printf("\n\n-Hoje aconteceu uma batalha épica:");
    printf("\n     CELULAR VS SEU FUTURO");

    printf("\n\n-O sistema do GabGab precisa");
    printf("\ndecidir quem venceu...");
    printf("\n-Mas antes responda essas simples perguntas:");

    printf("\n\n-Quantas horas você ficou no celular hoje?: ");
    scanf("%d" , &TempCell);

    printf("\n-Agora me diga quantas horas você estudou hoje?: ");
    scanf("%d" , &TempEstudo);

    Resultado = TempEstudo - TempCell;

    if(Resultado > 0){
        Resultado = 1;
    }else{
        if(Resultado == 0){
            Resultado = 0;
        }else{
            Resultado = -1;
        }
    }

    switch(Resultado){
        case 0: 
            printf("\n-Empate técnico… cuidado, o celular tá te observando");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;
        
        case 1:
            printf("\n-VITÓRIA! O futuro agradece!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        case -1:
            printf("\n-Derrota… o celular dominou o dia! Revise suas decisões!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;
    
    }

    return 0;
}