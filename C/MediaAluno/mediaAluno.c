#include <stdio.h>
#include <string.h> 
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float nota1 , nota2 , media; 
    int faltas;
    
    printf("Qual o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Quantas faltas você possui: ");
    scanf("%d", &faltas);

    media = (nota1 + nota2) / 2;
    
    if(media >= 7.5){
        if(faltas > 60){
            printf("ALUNO %s REPROVADO POR FALTA\n", nome);
        }else{
            printf("ALUNO %s APROVADO POR MEDIA\n", nome);
        }
    }else{
        printf("ALUNO %s REPROVADO POR MEDIA\n", nome);
    }


    return 0;

}
