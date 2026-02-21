#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

    int n1 , n2; 

    printf("Digite aqui o primeiro numero: ");
    scanf("%d" , &n1);

    printf("Digite aqui o segundo numero: ");
    scanf("%d" , &n2);

    if( n1 > n2 ){
        printf("O maior numero é: %d" , n1);
    }else{
        printf("O maior numero é: %d" , n2);
    }


    return 0;

}