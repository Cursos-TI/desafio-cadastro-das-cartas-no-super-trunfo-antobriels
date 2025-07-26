#include <stdio.h>
int main (){

// Primeira carta:

int População1, PontoTurístico1, Código1;
char Estado1[2], Cidade1[50];
float area1, PIB1;

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%d", &Código1);

    printf("Digite a cidade da primeira carta: \n");
    scanf(" %[^\n]", &Cidade1);

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &População1);

    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &PontoTurístico1);

// Segunda Carta:

int População2, PontoTurístico2, Código2;
char Estado2[2], Cidade2[50];
float area2, PIB2;

 //   printf("Digite o estado da segunda carta: \n");
 //   scanf("%s", &Estado2);

   // printf("Digite o código da segunda carta: \n");
  //  scanf("%d", &Código2);

    printf("Digite a cidade da segunda carta: \n");
    scanf(" %[^\n]", &Cidade2);

    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &População2);

    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &PontoTurístico2);

// Exibição dos dados de cada carta:

printf("nome da cidade 1: %s", Cidade1);

// printf(" Carta 1: \n Estado 1: %s\n Código: %s %d\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos turísticos: %\n", Estado1, Estado1, Código1, Cidade1, População1, area1, PIB1, PontoTurístico1);





}