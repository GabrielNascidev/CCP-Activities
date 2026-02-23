#include <stdio.h>
#include <locale.h>

int main(){

    float salarioAt , reajuste , salarioNov;

    printf("Digite o seu salario atual: ");
    scanf("%f" , &salarioAt);

    printf("Digite o percentual de reajuste: ");
    scanf("%f" , &reajuste);

    salarioNov = salarioAt + (reajuste * salarioAt / 100);

    printf("Novo salário: R$%.2f" , salarioNov);



    return 0;
}