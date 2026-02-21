#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 
    float base;
    float altura; 
    float area;

    printf("Digite a altura do triângulo: ");
    scanf("%f" , &altura);
    
    printf("Digite a base do triângulo: ");
    scanf("%f" , &base);
    
    area = (altura * base) / 2;

    printf("A area desse triângulo é igual á %.2f\n" , area);


    return(0);

}