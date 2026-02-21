#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

        int num;

        printf("Digite aqui qualquer numero: ");
        scanf("%d" , &num);

        if( num % 2 == 0){
            printf("%d é um numero par!" , num);
        }else{
            printf("%d é um numero impar!" , num);
        }

    return 0;

}