#include <stdio.h>
#include <locale.h>

int main(){

    char name[20];
    int anoAT , anoNC , idade;

    printf("Digite aqui o seu nome: ");
    scanf("%s" , name);

    printf("Digite aqui o ano em que estamos atualmente: ");
    scanf("%d" , &anoAT);

    printf("Digite aqui o ano em que você nasceu: ");
    scanf("%d" , &anoNC);

    idade = anoAT - anoNC; 

    if( idade < 16){
        printf("Sr %s, sua idade é menor que 16 anos - NÃO VOTANTE !!" , name);
    }else if( idade == 16 || idade ==17){
        printf("Sr %s, sua idade é está entre 16 e 17 anos - VOTO OPCIONAL !!" , name);
    }else if( idade >= 18 && idade <= 69){
        printf("Sr %s, sua idade é está entre 18 e 69 anos - VOTO OBRIGATORIO !!" , name);
    }else{
        printf("Sr %s, sua idade é maior ou igual a 70 anos - VOTO OPCIONAL !!" , name);
    }
    

    return 0; 
}