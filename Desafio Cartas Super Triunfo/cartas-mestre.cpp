#include <stdio.h>
int main(){
    // Variáveis da 1ª Carta
    char carta1[50];
    char codigoCarta1[4];
    char cidadeNome1[50];
    unsigned long int populacao1;
    float areaKM1;
    float pib1;
    char pontosTuristico1[50];
    float densidadePopulacional1;
    float PIBperCapita1;
    float power1;

    //Variaveis da 2ª Carta
    char carta2[50];
    char codigoCarta2[4];
    char cidadeNome2[50];
    unsigned long int populacao2;
    float areaKM2;
    float pib2;
    char pontosTuristico2[50];
    float densidadePopulacional2;
    float PIBperCapita2;
    float power2;

    //Calculos (Variaveis)
    
    densidadePopulacional1 = populacao1 + areaKM1;
    PIBperCapita1 = pib1 + populacao1;
    densidadePopulacional2 = populacao2 + areaKM2;
    PIBperCapita2 = pib2 + populacao2;
    power1 = 1/densidadePopulacional1;
    power2 = 1/densidadePopulacional2;

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
    printf("\nDensidade Populacional: %f", densidadePopulacional1);
    printf("\nPIB per Capita: %f", PIBperCapita1);
    printf("\nSuper Poder: %f", power1);

    //Valores Carta 2
    printf("\n\nCarta 2: %s", carta2);
    printf("\nCodigo da Carta: %s", codigoCarta2);
    printf("\nNome da Cidade: %s", cidadeNome2);
    printf("\nPopulação: %d", populacao2);
    printf("\nArea KM: %f", areaKM2);
    printf("\nPIB: %f", pib2);
    printf("\nPontos Turisticos: %s", pontosTuristico2);
    printf("\nDensidade Populacional: %f", densidadePopulacional2);
    printf("\nPIB per Capita: %f", PIBperCapita2);
    printf("\nSuper Poder: %f", power2);

    // Comparações
    printf("\n\nComparacao de Cartas:");
    printf("\n\nArea: %d\n", areaKM1 > areaKM2);
    printf("\nPopulacao: %d\n", populacao1 > populacao2);
    printf("\nPIB per capita: %d\n", pib1 > pib2);
    printf("\nDensidade populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("\nSuper Poder: %d\n", power1 > power2);

    // Resultado
    if (power1 > power2) {
        printf("\n\nVencedor: %s\n", carta1);
    } else if (power2 > power1) {
        printf("\n\nVencedor: %s\n", carta2);
    } else {
        printf("\n\nEmpate!\n");
    }

    return 0;
}