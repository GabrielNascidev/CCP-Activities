#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int crachaIdent , alertaSegu;
    
    printf("       ==== Cargas GabGab ====");
    printf("\n-Olá seja bem vindo, iremos verificar se você");
    printf("\npossui permissão para entra na area de carga!");

    printf("\n\n-Mas antes me responda:");
    printf("\n-Você possui o cracha de identificação? 1(sim) 0(nao): ");
    scanf("%d" , &crachaIdent);

    printf("\n-Agora, o alerta de segurança esta ativado? 1(sim) 0(nao)?: ");
    scanf("%d" , &alertaSegu);

    printf("\nPROCESSANDO...");
    
    if( crachaIdent == 1 && !alertaSegu ){
        printf("\nTudo ok, Acesso liberado!!");
    }else{
        printf("\nVocê não possui permissão para entrar nessa area!!");
    }

    return 0;
}