#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "Macaco";
    char exibicao[] = "______";
    char letra;
    int erros = 0;
    int maxErros = 6;
    int i, acertou;

    printf("===== JOGO DA FORCA =====\n");

    while (erros < maxErros) {

        printf("\nPalavra: %s\n", exibicao);
        printf("Erros restantes: %d\n", maxErros - erros);

        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        acertou = 0;

        // Verifica se a letra existe na palavra
        for (i = 0; i < strlen(palavra); i++) {

            if (palavra[i] == letra) {
                exibicao[i] = letra;
                acertou = 1;
            }
        }

        // Caso erre
        if (!acertou) {
            erros++;
            printf("Letra incorreta!\n");
        }

        // Verifica vitória
        if (strcmp(palavra, exibicao) == 0) {
            printf("\nParabéns! Você acertou a palavra:\n");
            printf("%s\n", palavra);
            break;
        }
    }

    // Caso perca
    if (erros == maxErros) {
        printf("\nVocê perdeu!\n");
        printf("A palavra era: %s\n", palavra);
    }

    return 0;
}