#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int codigo, senha;

    printf("Digite o codigo de usuario: ");
    scanf("%d", &codigo);

    printf("Digite a senha de usuario: ");
    scanf("%d", &senha);

    if( codigo == 1234 && senha == 9999){
        printf("✓ ACESSO PERMITIDO !!!"); 
    }else{
        printf("✗ ACESSO NEGADO - USUARIO E/OU SENHA INVALIDA !!!");
    }

    return 0;
}