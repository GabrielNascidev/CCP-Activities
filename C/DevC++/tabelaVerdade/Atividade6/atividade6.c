#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "");
    int uniEstoque , valiProduto;

    printf("==== Estoques do GabGab ====");
    printf("\n-Seja bem vindo ao sistema de verificação");
    printf("\nde validade e estoque do gabgab");

    printf("\n\nMe responda:");
    printf("\n-Quantas unidades desse produto possui no estoque?: ");
    scanf("%d" , &uniEstoque);
    printf("\n-Como esta a validade deste produto? 1(ok) 0(vencido): ");
    scanf("%d" , &valiProduto);

    printf("\n\nPROCESSANDO...");

    if( uniEstoque > 0 && valiProduto == 1 ){
        printf("\nProduto Pronto para Venda!!");
    }else{
        printf("\nProduto nao Pronto para Venda!!");
    }


    return 0;
}