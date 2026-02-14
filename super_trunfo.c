#include <stdio.h>

int main()
{

    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    printf("===== Cadastro da Carta 1 =====\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    super_poder1 =
        (float)populacao1 +
        area1 +
        (pib1 * 1000000000.0f) +
        (float)pontos1 +
        pib_per_capita1 +
        (1.0f / densidade1);

    printf("\n===== Cadastro da Carta 2 =====\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    super_poder2 =
        (float)populacao2 +
        area2 +
        (pib2 * 1000000000.0f) +
        (float)pontos2 +
        pib_per_capita2 +
        (1.0f / densidade2);

    int resultado_populacao = populacao1 > populacao2;
    int resultado_area = area1 > area2;
    int resultado_pib = pib1 > pib2;
    int resultado_pontos = pontos1 > pontos2;
    int resultado_densidade = densidade1 < densidade2;
    int resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int resultado_super_poder = super_poder1 > super_poder2;

    printf("\n==============================\n");
    printf("Comparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           resultado_populacao ? 1 : 2,
           resultado_populacao);

    printf("Area: Carta %d venceu (%d)\n",
           resultado_area ? 1 : 2,
           resultado_area);

    printf("PIB: Carta %d venceu (%d)\n",
           resultado_pib ? 1 : 2,
           resultado_pib);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           resultado_pontos ? 1 : 2,
           resultado_pontos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           resultado_densidade ? 1 : 2,
           resultado_densidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           resultado_pib_per_capita ? 1 : 2,
           resultado_pib_per_capita);

    printf("Super Poder: Carta %d venceu (%d)\n",
           resultado_super_poder ? 1 : 2,
           resultado_super_poder);

    return 0;
}
