#include <stdio.h>

int main() {
    // ----------- Carta 1 -----------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // ----------- Carta 2 -----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // ----------- Comparações -----------
    printf("\n=== Comparacao de Cartas ===\n");

    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu (1)\n");
    else if (populacao2 > populacao1)
        printf("Populacao: Carta 2 venceu (0)\n");
    else
        printf("Populacao: Empate (0)\n");

    if (area1 > area2)
        printf("Area: Carta 1 venceu (1)\n");
    else if (area2 > area1)
        printf("Area: Carta 2 venceu (0)\n");
    else
        printf("Area: Empate (0)\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu (0)\n");
    else
        printf("PIB: Empate (0)\n");

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    else
        printf("Pontos Turisticos: Empate (0)\n");

    // Para densidade, menor vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    else
        printf("Densidade Populacional: Empate (0)\n");

    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    else
        printf("PIB per Capita: Empate (0)\n");

    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else if (superPoder2 > superPoder1)
        printf("Super Poder: Carta 2 venceu (0)\n");
    else
        printf("Super Poder: Empate (0)\n");

    return 0;
}
