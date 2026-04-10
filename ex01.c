#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[20];

    printf("Qual o seu nome?\n");
    scanf("%s", &nome);

    printf("Olá, %s!\n", nome);

    printf("Agora digite sua idade: \n");
    scanf("%d", &idade);

    printf("Que legal, você tem %d anos!\n", idade);

    printf("E qual a sua altura, %s?\n", nome);
    scanf("%f", &altura);

    printf("Uau! Você tem %.2f metros.\n", altura);
    
    printf("Obrigada pelas respostas, %s. Até mais!", nome);


}