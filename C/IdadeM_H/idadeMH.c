#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int homi1, homi2, muie1, muie2, homivei, hominov, muievei, muienov, soma, mult;

    printf("Escreva a idade do primeiro homem: ");
    scanf("%d", &homi1);

    printf("Escreva a idade do segundo homem: ");
    scanf("%d", &homi2);

    printf("Escreva a idade da primeira mulher: ");
    scanf("%d", &muie1);

    printf("Escreva a idade da segunda mulher: ");
    scanf("%d", &muie2);

    /* determinar qual homem é mais velho */
    if (homi1 > homi2) {
        homivei = homi1;
    } else {
        homivei = homi2;
    }

    /* determinar qual mulher é mais nova */
    if (muie1 < muie2) {
        muienov = muie1;
    } else {
        muienov = muie2;
    }

    soma = homivei + muienov;
    printf("A soma da idade do homem mais velho com a da mulher mais nova é: %d anos\n", soma);



    return 0;
}