#include <stdio.h>

int main() {
    int qtd_notas;
    float nota_atual;
    float soma = 0.0;
    float media;

    printf("\n\nMÉDIA DE X NOTAS\n");
    printf("\n\nQuantas notas você gostaria de calcular a média?\n");
    scanf("%d", &qtd_notas);

    if (qtd_notas <= 0) {
        printf("\nQuantidade inválida! O número de notas deve ser maior que zero.\n\n");
        return 1;
    }

    for (int i = 1; i <= qtd_notas; i++) {
        printf("\nInsira a nota %d:\n", i);
        scanf("%f", &nota_atual);

        soma = soma + nota_atual;

    }

    media = soma / qtd_notas;

    printf("\nA média das %d notas é %.2f\n\n", qtd_notas, media);

    return 0;
}