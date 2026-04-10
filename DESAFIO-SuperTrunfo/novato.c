#include <stdio.h>

struct Carta{
    char estado;
    char codigo[6];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
};

int main(){

    struct Carta carta1, carta2;

    printf("\n\nSUPER TRUNFO\n\n");
    printf("Vamos começar cadastrando as cartas do jogo?\nPreencha as informações a seguir com atenção ;)\n\n");

    printf("CARTA 1\n");

    printf("Digite a LETRA correspondente ao ESTADO da carta: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o CÓDIGO da carta: ");
    scanf(" %s", carta1.codigo);

    printf("Digite o nome da CIDADE presente na carta: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Digite o NÚMERO DE HABITANTES presente na carta (apenas números): ");
    scanf("%i", &carta1.populacao);

    printf("Digite a ÁREA presente na carta (apenas números): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB -Produto Interno Bruto- presente na carta (apenas números): ");
    scanf("%f", &carta1.PIB);

    printf("Digite o número de PONTOS TURÍSTICOS presente na carta (apenas números): ");
    scanf("%i", &carta1.pontos_turisticos);

    printf("\nPronto, temos a primeira carta cadastrada!\nAgora vamos cadastrar a segunda carta do jogo?\n\n");
    
    printf("CARTA 2\n");

    printf("Digite a LETRA correspondente ao ESTADO da carta: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o CÓDIGO da carta: ");
    scanf(" %s", carta2.codigo);

    printf("Digite o nome da CIDADE presente na carta: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Digite o NÚMERO DE HABITANTES presente na carta (apenas números): ");
    scanf("%i", &carta2.populacao);

    printf("Digite a ÁREA presente na carta (apenas números): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB -Produto Interno Bruto- presente na carta (apenas números): ");
    scanf("%f", &carta2.PIB);

    printf("Digite o número de PONTOS TURÍSTICOS presente na carta (apenas números): ");
    scanf("%i", &carta2.pontos_turisticos);

    printf("\nPronto, já temos duas cartas cadastradas! Vamos conferir?\n\n");

    printf("CARTA 1\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %i\n", carta1.populacao);
    printf("Área: %.2fkm^2\n", carta1.area);
    printf("PIB: R$%.2f\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %i\n\n", carta1.pontos_turisticos);

    printf("CARTA 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %i\n", carta2.populacao);
    printf("Área: %.2fkm^2\n", carta2.area);
    printf("PIB: R$%.2f\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %i\n\n", carta2.pontos_turisticos);

    return 0;

}