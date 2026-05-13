#include <stdio.h>

int main() {
    char tabuleiro[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    int linha, coluna;
    int jogadas = 0;
    char jogador = 'X';
    int venceu = 0;

    while (jogadas < 9 && !venceu) {

        // Exibe o tabuleiro
        printf("\n JOGO DA VELHA \n");
        printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

        // Jogada
        printf("\nJogador %c\n", jogador);
        printf("Digite a linha (0-2): ");
        scanf("%d", &linha);

        printf("Digite a coluna (0-2): ");
        scanf("%d", &coluna);

        // Valida entrada e verifica se a posição está vazia
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Coordenadas inválidas! Use valores de 0 a 2.\n");
            continue;
        }

        if (tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogador;
            jogadas++;
        } else {
            printf("Posição já ocupada!\n");
            continue;
        }

        // Verifica linhas e colunas
        for (int i = 0; i < 3; i++) {

            if (tabuleiro[i][0] == jogador &&
                tabuleiro[i][1] == jogador &&
                tabuleiro[i][2] == jogador) {
                venceu = 1;
            }

            if (tabuleiro[0][i] == jogador &&
                tabuleiro[1][i] == jogador &&
                tabuleiro[2][i] == jogador) {
                venceu = 1;
            }
        }

        // Verifica diagonais
        if (tabuleiro[0][0] == jogador &&
            tabuleiro[1][1] == jogador &&
            tabuleiro[2][2] == jogador) {
            venceu = 1;
        }

        if (tabuleiro[0][2] == jogador &&
            tabuleiro[1][1] == jogador &&
            tabuleiro[2][0] == jogador) {
            venceu = 1;
        }

        // Alterna jogador
        if (!venceu) {
            if (jogador == 'X') {
                jogador = 'O';
            } else {
                jogador = 'X';
            }
        }
    }

    // Exibe tabuleiro final
    printf("\n TABULEIRO FINAL \n");
    printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

    // Resultado
    if (venceu) {
        printf("\nJogador %c venceu!\n", jogador);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}