#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL , "");

    float distancia;
    int movimento_detectado;

    printf("=== SISTEMA DE ESTACIONAMENTO ===\n");

    while (1) {
    
        printf("\nDistancia (cm): ");
        scanf("%f", &distancia);

        printf("Movimento detectado (1=sim, 0=nao): ");
        scanf("%d", &movimento_detectado);

    
        printf("\n[STATUS]\n");
        printf("Distancia: %.1f cm\n", distancia);

        if (movimento_detectado) {
            printf("Movimento: DETECTADO\n");
        } else {
            printf("Movimento: NENHUM\n");
        }

    
        if (distancia < 20) {
            printf(">>> ALERTA CRITICO! PARE IMEDIATAMENTE!\n");
            printf("BEEP BEEP BEEP BEEP!!!\n");
        } 
        else if (distancia < 50 || movimento_detectado) {
            printf(">>> ATENCAO: Objeto proximo.\n");
            printf("BEEP BEEP...\n");
        } 
        else {
            printf(">>> AREA SEGURA\n");
        }
    }

    return 0;
}