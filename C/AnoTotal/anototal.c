#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int ano_nasci;
    int ano_atual;
    int idade;

    printf("Digite aqui o seu nome: ");
    scanf("%19s" , &nome);

    printf("Digite aqui o ano do seu nascimento: ");
    scanf("%d" , &ano_nasci);

    printf("Digite aqui o ano em que estamos atualmente: ");
    scanf("%d" , &ano_atual);

    idade = ano_atual - ano_nasci;

    printf("Sr(a) %s o senhor(a) terá %d anos ao final desse ano!!\n", nome , idade);



    return 0;
}