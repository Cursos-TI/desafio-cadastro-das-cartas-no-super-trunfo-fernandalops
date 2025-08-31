#include<stdio.h>

typedef struct{
int populacao;
float area;
float pib;
int pontos_turisticos;
} CartaCidade;

int main(){
  CartaCidade carta1;
  CartaCidade carta2;

  //----cadastro da primeira carta----
  printf("Digite a população: \n");
  scanf("%d", &carta1.populacao);

  printf("Digite a area: \n");
  scanf("%f", &carta1.area);

  printf("Digite o PIB: \n");
  scanf("%f", &carta1.pib);

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &carta1.pontos_turisticos);

  //----cadastro da segunda carta----
  printf("Digite a população: \n");
  scanf("%d", &carta2.populacao);

  printf("Digite a area: \n");
  scanf("%f", &carta2.area);

  printf("Digite o PIB: \n");
  scanf("%f", &carta2.pib);
  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &carta2.pontos_turisticos);

  //----exibicao das cartas cadastradas----

  printf("\n---Dados das Cartas---");

  //----exibicao da primeira carta----

  printf("\nCarta 1:\n");
  printf("Populacao: %d\n", carta1.populacao);
  printf("Area: %.2f km2\n", carta1.area);
  printf("PIB: %.2f bilhoes\n", carta1.pib);
  printf("Pontos Turiscicos: %d\n", carta1.pontos_turisticos);

  //----exibicao da segunda carta----

  printf("\nCarta 2:\n");
  printf("Populacao: %d\n", carta2.populacao);
  printf("Area: %.2f km2\n", carta2.area);
  printf("PIB: %.2f bilhoes\n", carta2.pib);
  printf("Pontos Turiscicos: %d\n", carta2.pontos_turisticos);

  return 0;
}