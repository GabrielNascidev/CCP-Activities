#include <stdio.h>
#include <string.h>

int main() {
    char pedido[50];
    int quantidadePedidos = 0;

    printf("===== Cafeteria GabGab =====\n");

    while (1) {
        printf("\nDigite seu pedido (ou 'sair' / 'conta'): ");
        fgets(pedido, sizeof(pedido), stdin);

        // Remove o ENTER do fgets
        pedido[strcspn(pedido, "\n")] = '\0';

        // Verifica se o usuário deseja encerrar
        if (strcmp(pedido, "sair") == 0 || strcmp(pedido, "conta") == 0) {
            break;
        }

        printf("Pedido \"%s\" registrado com sucesso!\n", pedido);
        quantidadePedidos++;
    }

    printf("\n===== Conta Final =====\n");
    printf("Total de pedidos realizados: %d\n", quantidadePedidos);
    printf("Obrigado por visitar a Cafeteria GabGab!\n");

    return 0;
}