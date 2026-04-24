#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float media;

    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("A média das duas notas é %.2f\n", media);

    return 0;

}