#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int nrMacas;
    float valorT;

    printf("\nQuantas maçãs você irá comprar?: ");
    scanf("%d" , &nrMacas);

    if(nrMacas < 12){
        valorT = nrMacas * 1.30;
        printf("\nVocê irá pagar R$%.2f em %d maçãs!!!", valorT, nrMacas);
    }else{
        valorT = nrMacas * 1.00;
        printf("\nVocê irá pagar R$%.2f em %d maçãs!!!", valorT, nrMacas);
    }

    
    return 0;
}