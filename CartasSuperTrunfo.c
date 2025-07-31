#include <stdio.h>

int main (){

// Váriaveis:

int populacao1, pontoturistico1;
char estado1[10], cidade1[50], codigo1[10];
float area1, PIB1, densidade1, pibpercapta1, super1;
int populacao2, pontoturistico2;
char estado2[10], cidade2[50], codigo2[10];
float area2, PIB2, densidade2, pibpercapta2, super2;

// Primeira Carta:

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade da primeira carta: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontoturistico1);

    densidade1 = populacao1 / area1;
    pibpercapta1 = PIB1 / populacao1;
    super1 = populacao1 + area1 + PIB1 + pontoturistico1 + pibpercapta1 - densidade1;

    // Segunda Carta:

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade da segunda carta: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontoturistico2);

    densidade2 = populacao2 / area2;
    pibpercapta2 = PIB2 / populacao2;
    super2 = populacao2 + area2 + PIB2 + pontoturistico2 + pibpercapta2 - densidade2;

    // Exibição dos dados de cada carta:

    printf(" Carta 1: \n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %d\n", estado1, estado1, codigo1, cidade1, populacao1);
    printf(" Área: %.3f\n PIB: %.3f\n Pontos turísticos: %d\n", area1, PIB1, pontoturistico1);
    printf(" Densidade populacional: %.3f\n PIB per capta: %.3f\n", densidade1, pibpercapta1);
    printf(" Super Poder: %.3f\n", super1);

    printf("\n Carta 2: \n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %d\n", estado2, estado2, codigo2, cidade2, populacao2);
    printf(" Área: %.3f\n PIB: %.3f\n Pontos turísticos: %d\n", area2, PIB2, pontoturistico2);
    printf(" Densidade populacional: %.3f\n PIB per capta: %.3f\n", densidade2, pibpercapta2);
    printf(" Super Poder: %.3f\n", super2);

    // Comparação das cartas:

    printf(" Comparação das cartas:\n");
    printf(" Se Carta 1 vence = 0\n");
    printf(" Se Carta 2 vence = 1\n");
    printf(" População: %d\n", populacao1 < populacao2);
    printf(" Área: %d\n", area1 < area2);
    printf(" PIB: %d\n", PIB1 < PIB2);
    printf(" Ponto Turístico: %d\n", pontoturistico1 < pontoturistico2);
    printf(" Densidade Populacional: %d\n", densidade1 > densidade2);
    printf(" PIB per Capita: %d\n", pibpercapta1 < pibpercapta2);
    printf(" Super Poder: %d\n", super1 < super2);








}