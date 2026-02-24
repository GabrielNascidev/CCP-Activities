#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    char name[20];
    int idade;
    char friend[5];

    printf("********* RÔMULUS BEER *********\n");
    printf("   A casa mais top da cidade   \n");

    printf("Boa noite Sr. Qual o seu nome?: ");
    scanf("%s" , &name);

    printf("Sr %s, o senhor é amigo do dono?: " , name);
    scanf("%s" , &friend);

    if( strcmp(friend , "sim") == 0 ){
        printf("Seja bem vindo Sr %s. APROVEITE NOSSOS SERVIÇOS!" , name);
    }else{

        printf("Sr %s, quantos anos o senhor tem?: " , name);
        scanf("%d" , &idade); 

       if(idade >= 18){
        printf("Seja bem vindo Sr %s. APROVEITE NOSSOS SERVIÇOS!" , name);

    }else{
        printf("%s, VAI DORMIR SEU PIRRALHO!" , name );
    } 
    }

    
    return 0;
}