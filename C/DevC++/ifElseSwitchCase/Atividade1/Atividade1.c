#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int AtiviDia , TempEstudo, Resultado ;

    printf("----- Missão Secreta do GabGab -----");
    printf("\n-Parabens guerreiro, você foi selecionado");
    printf("\npara uma missão ultra secreta do GabGab!!");
    printf("\n\n-Mas antes o sistema precisa");
    printf("\nanalisar seu corportamento de hoje!!");

    printf("\n\n-Responda as perguntas abaixo:");
    printf("\n\n-Você fez a atividade do dia?(1 = SIM / 0 = NÃO) ");
    scanf("%d" , &AtiviDia);
    printf("\n-Você estudou pelo menos 30 minutos?(1 = SIM / 0 = NÃO) ");
    scanf("%d" , &TempEstudo);

    Resultado = AtiviDia + TempEstudo;

    switch(Resultado){
        case 0:
            printf("\n-Game Over (por hoje)! Tente novamente amanhã!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        case 1: 
            printf("\n-Quase lá… faltou só um pouco pra subir de nível!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        case 2:
            printf("\n-Missão cumprida! XP +100! Futuro desbloqueado!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;

        default:
            printf("\n-Opção de resposta Invalida!!");
            printf("\n-Obrigado por usar o sistema do GabGab!");
        break;
    }


    return 0; 
}