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

       int op1, op2;

       printf("\nEscolha o PRIMEIRO atributo:\n");
       printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n");
       printf("Opcao: ");
       scanf("%d", &op1);

       printf("\nEscolha o SEGUNDO atributo:\n");
       if (op1 != 1)
              printf("1 - Populacao\n");
       if (op1 != 2)
              printf("2 - Area\n");
       if (op1 != 3)
              printf("3 - PIB\n");
       if (op1 != 4)
              printf("4 - Pontos Turisticos\n");
       if (op1 != 5)
              printf("5 - Densidade Populacional\n");
       printf("Opcao: ");
       scanf("%d", &op2);

       if (op1 == op2)
       {
              printf("Erro: atributos nao podem ser iguais.\n");
              return 0;
       }

       float a1_c1 = 0, a1_c2 = 0, a2_c1 = 0, a2_c2 = 0;
       char nome1[30], nome2[30];

       for (int i = 1; i <= 2; i++)
       {
              int op = (i == 1) ? op1 : op2;
              float *v1 = (i == 1) ? &a1_c1 : &a2_c1;
              float *v2 = (i == 1) ? &a1_c2 : &a2_c2;
              char *nome = (i == 1) ? nome1 : nome2;

              switch (op)
              {
              case 1:
                     *v1 = populacao1;
                     *v2 = populacao2;
                     sprintf(nome, "Populacao");
                     break;
              case 2:
                     *v1 = area1;
                     *v2 = area2;
                     sprintf(nome, "Area");
                     break;
              case 3:
                     *v1 = pib1;
                     *v2 = pib2;
                     sprintf(nome, "PIB");
                     break;
              case 4:
                     *v1 = pontos1;
                     *v2 = pontos2;
                     sprintf(nome, "Pontos Turisticos");
                     break;
              case 5:
                     *v1 = densidade1;
                     *v2 = densidade2;
                     sprintf(nome, "Densidade Populacional");
                     break;
              default:
                     printf("Opcao invalida.\n");
                     return 0;
              }
       }

       float soma1 = a1_c1 + a2_c1;
       float soma2 = a1_c2 + a2_c2;

       char *resultado =
           (soma1 > soma2) ? pais1 : (soma2 > soma1) ? pais2
                                                     : "Empate";

       printf("\n==============================\n");
       printf("Comparacao Final\n\n");

       printf("%s:\n", pais1);
       printf("%s: %.2f\n", nome1, a1_c1);
       printf("%s: %.2f\n", nome2, a2_c1);
       printf("Soma: %.2f\n\n", soma1);

       printf("%s:\n", pais2);
       printf("%s: %.2f\n", nome1, a1_c2);
       printf("%s: %.2f\n", nome2, a2_c2);
       printf("Soma: %.2f\n\n", soma2);

       printf("Resultado: %s venceu!\n", resultado);

       return 0;
}
