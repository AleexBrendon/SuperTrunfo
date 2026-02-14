#include <stdio.h>

int main()
{

       char estado1, estado2;
       char codigo1[4], codigo2[4];
       char cidade1[50], cidade2[50];
       unsigned long int populacao1, populacao2;
       float area1, area2;
       float pib1, pib2;
       int pontos1, pontos2;
       float densidade1, densidade2;
       float pib_per_capita1, pib_per_capita2;

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
       
       unsigned long int valor1 = populacao1;
       unsigned long int valor2 = populacao2;
       char atributo[] = "Populacao";

       int carta_vencedora = 0;

       if (valor1 > valor2)
       {
              carta_vencedora = 1;
       }
       else if (valor2 > valor1)
       {
              carta_vencedora = 2;
       }
       else
       {
              carta_vencedora = 0;
       }

       printf("\n==============================\n");
       printf("Comparacao de Cartas (Atributo: %s)\n\n", atributo);
       printf("Carta 1 - %s (%s): %lu\n", cidade1, codigo1, valor1);
       printf("Carta 2 - %s (%s): %lu\n", cidade2, codigo2, valor2);

       if (carta_vencedora == 1)
       {
              printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
       }
       else if (carta_vencedora == 2)
       {
              printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
       }
       else
       {
              printf("\nResultado: Empate!\n");
       }

       return 0;
}
