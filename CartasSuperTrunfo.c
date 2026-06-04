#include <stdio.h>

int main (){
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    char estado1[50];
    char cidade1[50];
    char codigo1[50];

  int populacao2, pontosTuristicos2;
    float area2, pib2;
    char estado2[50];
    char cidade2[50];
    char codigo2[50];


printf("Digite o estado da carta 1: \n");
scanf("%s", estado1);

printf("Digite a cidade da carta 1: \n");
scanf("%s", cidade1);

printf("Digite o codigo da carta 1: \n");
scanf("%s", codigo1);

printf("Digite a populacao da carta 1: \n");
scanf("%d", &populacao1);

printf("Digite a quantidade de pontos turisticos da carta 1: \n");
scanf("%d", &pontosTuristicos1);

printf("Digite a area da carta 1: \n");
scanf("%f", &area1);

printf("Digite o PIB da carta 1: \n");
scanf("%f", &pib1);

printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Codigo: %s\n", codigo1);
printf("Populacao: %d\n", populacao1);
printf("Pontos turisticos: %d\n", pontosTuristicos1);
printf("PIB: %f\n", pib1);
printf("area: %f\n", area1);

printf("Digite os mesmos dados, agora da carta 2. \n");
printf("Digite o estado da carta 2: \n");
scanf("%s", estado2);

printf("Digite a cidade da carta 2: \n");
scanf("%s", cidade2);

printf("Digite o codigo da carta 2: \n");
scanf("%s", codigo2);

printf("Digite a populacao da carta 2: \n");
scanf("%d", &populacao2);

printf("Digite a quantidade de pontos turisticos da carta 2: \n");
scanf("%d", &pontosTuristicos2);

printf("Digite a area da carta 2: \n");
scanf("%f", &area2);

printf("Digite o PIB da carta 2: \n");
scanf("%f", &pib2);

printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Codigo: %s\n", codigo2);
printf("Populacao: %d\n", populacao2);
printf("Pontos turisticos: %d\n", pontosTuristicos2);
printf("PIB: %f\n", pib1);
printf("area: %f\n", area1);

return 0;

}
