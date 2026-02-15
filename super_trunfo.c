#include <stdio.h>

int main()
{

       char pais1[50], pais2[50];
       unsigned long int populacao1, populacao2;
       float area1, area2, pib1, pib2, densidade1, densidade2;
       int pontos1, pontos2;

       printf("Digite o nome do pais 1: ");
       scanf(" %[^\n]", pais1);
       printf("Populacao: ");
       scanf("%lu", &populacao1);
       printf("Area (km2): ");
       scanf("%f", &area1);
       printf("PIB (bilhoes R$): ");
       scanf("%f", &pib1);
       printf("Pontos Turisticos: ");
       scanf("%d", &pontos1);
       densidade1 = (float)populacao1 / area1;

       printf("\nDigite o nome do pais 2: ");
       scanf(" %[^\n]", pais2);
       printf("Populacao: ");
       scanf("%lu", &populacao2);
       printf("Area (km2): ");
       scanf("%f", &area2);
       printf("PIB (bilhoes R$): ");
       scanf("%f", &pib2);
       printf("Pontos Turisticos: ");
       scanf("%d", &pontos2);
       densidade2 = (float)populacao2 / area2;

       int opcao;
       printf("\nEscolha o atributo para comparar:\n");
       printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n");
       printf("Opção: ");
       scanf("%d", &opcao);

       printf("\n==============================\n");

       switch (opcao)
       {
       case 1:
              printf("Comparacao (Populacao):\n");
              printf("%s: %lu\n", pais1, populacao1);
              printf("%s: %lu\n", pais2, populacao2);
              if (populacao1 > populacao2)
                     printf("Resultado: %s venceu!\n", pais1);
              else if (populacao2 > populacao1)
                     printf("Resultado: %s venceu!\n", pais2);
              else
                     printf("Resultado: Empate!\n");
              break;

       case 2:
              printf("Comparacao (Area):\n");
              printf("%s: %.2f km2\n", pais1, area1);
              printf("%s: %.2f km2\n", pais2, area2);
              if (area1 > area2)
                     printf("Resultado: %s venceu!\n", pais1);
              else if (area2 > area1)
                     printf("Resultado: %s venceu!\n", pais2);
              else
                     printf("Resultado: Empate!\n");
              break;

       case 3:
              printf("Comparacao (PIB):\n");
              printf("%s: %.2f bilhoes\n", pais1, pib1);
              printf("%s: %.2f bilhoes\n", pais2, pib2);
              if (pib1 > pib2)
                     printf("Resultado: %s venceu!\n", pais1);
              else if (pib2 > pib1)
                     printf("Resultado: %s venceu!\n", pais2);
              else
                     printf("Resultado: Empate!\n");
              break;

       case 4:
              printf("Comparacao (Pontos Turisticos):\n");
              printf("%s: %d\n", pais1, pontos1);
              printf("%s: %d\n", pais2, pontos2);
              if (pontos1 > pontos2)
                     printf("Resultado: %s venceu!\n", pais1);
              else if (pontos2 > pontos1)
                     printf("Resultado: %s venceu!\n", pais2);
              else
                     printf("Resultado: Empate!\n");
              break;

       case 5:
              printf("Comparacao (Densidade Populacional):\n");
              printf("%s: %.2f hab/km2\n", pais1, densidade1);
              printf("%s: %.2f hab/km2\n", pais2, densidade2);
              if (densidade1 < densidade2)
                     printf("Resultado: %s venceu!\n", pais1);
              else if (densidade2 < densidade1)
                     printf("Resultado: %s venceu!\n", pais2);
              else
                     printf("Resultado: Empate!\n");
              break;

       default:
              printf("Opcao invalida! Tente novamente.\n");
              break;
       }

       return 0;
}
