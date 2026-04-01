#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int op1, op2;
    float preco = 0;
    float gorjeta , total;

    printf("----- Saboroso Byte -----");
    printf("\n        Cardapio");
    printf("\n[1] - X-Salada     R$10");
    printf("\n[2] - Misto Duplo  R$8");
    printf("\n[3] - Coca-Cola    R$5");
    printf("\n[4] - Pastel       R$8");

    printf("\n\nEcolha o seu lanche: ");
    scanf("%d" , &op1);

    switch (op1){
        case 1:
            printf("\nVocê escolheu o X-Salada no valor de R$10");
            printf("\n\nFormas de pagamento:");
            printf("\n[1] - Dinheiro  [2] - Cartão");
            printf("\n[3] - Pix       [4] - Outro");

            printf("\n\nEscolha a sua forma de pagamento: ");
            scanf("%d" , &op2);
            
            preco = 10;
            gorjeta = preco * 0.10;

            switch (op2){
                case 1:
                    gorjeta = gorjeta * 0.95;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 2: 
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 3:
                    gorjeta = gorjeta * 1.03;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 4:
                    printf("\nMétodo de pagamento não incentivado!!");
                break;
                default:
                    printf("\nForma de pagamento Invalido!!");
                break;
            } 
        break;

        case 2:
            printf("\nVocê escolheu o Misto Duplo no valor de R$8");
            printf("\n\nFormas de pagamento:");
            printf("\n[1] - Dinheiro  [2] - Cartão");
            printf("\n[3] - Pix       [4] - Outro");

            printf("\n\nEscolha a sua forma de pagamento: ");
            scanf("%d" , &op2);
            
            preco = 8;
            gorjeta = preco * 0.10;

            switch (op2){
                case 1:
                    gorjeta = gorjeta * 0.95;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 2: 
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 3:
                    gorjeta = gorjeta * 1.03;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 4:
                    printf("\nMétodo de pagamento não incentivado!!");
                break;
                default:
                    printf("\nForma de pagamento Invalido!!");
                break;
            } 
        break;

        case 3:
            printf("\nVocê escolheu a Coca-Cola no valor de R$5");
            printf("\n\nFormas de pagamento:");
            printf("\n[1] - Dinheiro  [2] - Cartão");
            printf("\n[3] - Pix       [4] - Outro");

            printf("\n\nEscolha a sua forma de pagamento: ");
            scanf("%d" , &op2);
            
            preco = 5;
            gorjeta = preco * 0.10;

            switch (op2){
                case 1:
                    gorjeta = gorjeta * 0.95;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 2: 
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 3:
                    gorjeta = gorjeta * 1.03;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 4:
                    printf("\nMétodo de pagamento não incentivado!!");
                break;
                default:
                    printf("\nForma de pagamento Invalido!!");
                break;
            } 
        break;

        case 4:
            printf("\nVocê escolheu o Pastel no valor de R$8");
            printf("\n\nFormas de pagamento:");
            printf("\n[1] - Dinheiro  [2] - Cartão");
            printf("\n[3] - Pix       [4] - Outro");

            printf("\n\nEscolha a sua forma de pagamento: ");
            scanf("%d" , &op2);
            
            preco = 8;
            gorjeta = preco * 0.10;

            switch (op2){
                case 1:
                    gorjeta = gorjeta * 0.95;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 2: 
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 3:
                    gorjeta = gorjeta * 1.03;
                    total = gorjeta + preco;
                    printf("\nVocê pagará um total de R$: %.2f" , total);
                break;
                case 4:
                    printf("\nMétodo de pagamento não incentivado!!");
                break;
                default:
                    printf("\nForma de pagamento Invalido!!");
                break;
            } 
        break;

        default:
            printf("\nOpção de lanche Invalido!!");
        break;
    }

    return 0;
}