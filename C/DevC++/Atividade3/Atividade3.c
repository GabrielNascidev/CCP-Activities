#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int Horas , Nivel ;

    printf("----- Ranking Supremo dos Estudantes -----");
    printf("\n -Olá guerreiro, seja bem vindo ao");
    printf("\n ranking Supremo dos Estudantes!");

    printf("\n\n-O sistema do GabGab irá ajudar você à");
    printf("\ndescobrir o seu nível entre os alunos!!");

    printf("\n\n-Mas antes responda:");
    printf("\n-Quantas horas você estudou durante a semana?: ");
    scanf("%d" , &Horas);

    if(Horas >= 0 && Horas <= 2){
        Nivel = 1;
    }else if(Horas >= 3 && Horas <= 5){
        Nivel = 2;
    }else if(Horas >= 6 && Horas <= 10){
        Nivel = 3;
    }else{
        Nivel = 4;
    }
        

    switch(Nivel){
        case 1:
            printf("\n-Nível 1: Modo soneca ativado");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        case 2:
            printf("\n-Nível 2: Acordando pra vida");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        case 3:
            printf("\n-Nível 3: Foco total!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        case 4:
            printf("\n-Nível 4: Lenda do conhecimento!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;
    }       


    return 0;
}