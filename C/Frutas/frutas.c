#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int fruta, quant;
    float total;
   
    printf("\n\n=== MENU ===");
    printf("\n1 - Maçã - R$ 1,20");
    printf("\n2 - Pera - R$ 1,50");
    printf("\n3 - Melancia - R$ 1,70");
   
    printf("\nDigite a fruta desejada: ");
    scanf("%d", &fruta);
   
    if( fruta < 1 || fruta > 3)
        printf("Fruta inválida!");
    else{
        printf("\nDigite a quantidade: ");
        scanf("%d", &quant);
       
        if(quant < 1)
             printf("Quantidade inválida!");
        else{
            if(fruta == 1)
                total = quant * 1.2;
            else if(fruta == 2)
                total = quant * 1.5;
                else
                    total = quant * 1.7;
                   
        printf("\n\nTotal: R$ %.2f", total);
               
               
        }
       
    }    
    return(0);
}