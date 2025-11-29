#include <stdio.h>
int main(){
    // Variáveis da 1ª Carta
    char carta1[50];
    char codigoCarta1[4];
    char cidadeNome1[50];
    int populacao1;
    float areaKM1;
    float pib1;
    char pontosTuristico1[50];

    //Variaveis da 2ª Carta
    char carta2[50];
    char codigoCarta2[4];
    char cidadeNome2[50];
    int populacao2;
    float areaKM2;
    float pib2;
    char pontosTuristico2[50];

    //Entrada e saida de dados:
    // Entrada de dados dos valores da 1ª carta
    printf("Escreva o nome da primeira carta: ");
    scanf("%49s", carta1);

    printf("Escreva o Codigo da carta: ");
    scanf("%3s", codigoCarta1);

    printf("Escreva o nome da cidade: ");
    scanf("%49s", cidadeNome1);

    printf("Escreva o numero da populacao: ");
    scanf("%d", &populacao1);

    printf("Escreva a area em KM: ");
    scanf("%f", &areaKM1);

    printf("Escreva o PIB: ");
    scanf("%f", &pib1);

    printf("Escreva o ponto turistico: ");
    scanf("%49s", pontosTuristico1);

    // Entrada de dados dos valores da 2ª carta
    printf("Escreva o nome da segunda carta: ");
    scanf("%49s", carta2);

    printf("Escreva o Codigo da carta: ");
    scanf("%3s", codigoCarta2);

    printf("Escreva o nome da cidade: ");
    scanf("%49s", cidadeNome2);

    printf("Escreva o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("Escreva a area em KM: ");
    scanf("%f", &areaKM2);

    printf("Escreva o PIB: ");
    scanf("%f", &pib2);

    printf("Escreva o ponto turistico: ");
    scanf("%49s", pontosTuristico2);

    //Valores Carta 1
    printf("\n\nCarta 1: %s", carta1);
    printf("\nCodigo da Carta: %s", codigoCarta1);
    printf("\nNome da Cidade: %s", cidadeNome1);
    printf("\nPopulação: %d", populacao1);
    printf("\nArea KM: %f", areaKM1);
    printf("\nPIB: %f", pib1);
    printf("\nPontos Turisticos: %s", pontosTuristico1);

    //Valores Carta 2
    printf("\n\nCarta 2: %s", carta2);
    printf("\nCodigo da Carta: %s", codigoCarta2);
    printf("\nNome da Cidade: %s", cidadeNome2);
    printf("\nPopulação: %d", populacao2);
    printf("\nArea KM: %f", areaKM2);
    printf("\nPIB: %f", pib2);
    printf("\nPontos Turisticos: %s", pontosTuristico2);

    return 0;
}