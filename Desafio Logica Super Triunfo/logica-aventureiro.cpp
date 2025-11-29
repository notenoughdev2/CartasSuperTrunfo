#include <stdio.h>

int main() {
    // Variáveis da 1ª Carta
    char carta1[50] = "";
    char codigoCarta1[4] = "";
    char cidadeNome1[50] = "";
    unsigned long int populacao1 = 0;
    float areaKM1 = 0;
    float pib1 = 0;
    char pontosTuristico1[50] = "";
    float densidadePopulacional1 = 0;
    float PIBperCapita1 = 0;
    float power1 = 0;

    // Variáveis da 2ª Carta
    char carta2[50] = "";
    char codigoCarta2[4] = "";
    char cidadeNome2[50] = "";
    unsigned long int populacao2 = 0;
    float areaKM2 = 0;
    float pib2 = 0;
    char pontosTuristico2[50] = "";
    float densidadePopulacional2 = 0;
    float PIBperCapita2 = 0;
    float power2 = 0;

    int opcao;

    while (1) {
        printf("\n==== SUPER TRIUNFO CARTAS ====\n");
        printf("1- Cadastro de Cartas\n");
        printf("2- Ver Informacoes\n");
        printf("3- Comparacao de Cartas\n");
        printf("4- Resultado\n");
        printf("5- Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Cadastro da 1ª carta
                printf("Escreva o nome da primeira carta: ");
                scanf("%49s", carta1);

                printf("Escreva o Codigo da carta: ");
                scanf("%3s", codigoCarta1);

                printf("Escreva o nome da cidade: ");
                scanf("%49s", cidadeNome1);

                printf("Escreva o numero da populacao: ");
                scanf("%lu", &populacao1);

                printf("Escreva a area em KM: ");
                scanf("%f", &areaKM1);

                printf("Escreva o PIB: ");
                scanf("%f", &pib1);

                printf("Escreva o ponto turistico: ");
                scanf("%49s", pontosTuristico1);

                // Cadastro da 2ª carta
                printf("Escreva o nome da segunda carta: ");
                scanf("%49s", carta2);

                printf("Escreva o Codigo da carta: ");
                scanf("%3s", codigoCarta2);

                printf("Escreva o nome da cidade: ");
                scanf("%49s", cidadeNome2);

                printf("Escreva o numero da populacao: ");
                scanf("%lu", &populacao2);

                printf("Escreva a area em KM: ");
                scanf("%f", &areaKM2);

                printf("Escreva o PIB: ");
                scanf("%f", &pib2);

                printf("Escreva o ponto turistico: ");
                scanf("%49s", pontosTuristico2);

                // Cálculos após entrada de dados
                densidadePopulacional1 = (float)populacao1 / areaKM1;
                PIBperCapita1 = pib1 / populacao1;
                densidadePopulacional2 = (float)populacao2 / areaKM2;
                PIBperCapita2 = pib2 / populacao2;
                power1 = PIBperCapita1 + (1.0f / densidadePopulacional1);
                power2 = PIBperCapita2 + (1.0f / densidadePopulacional2);

                printf("Cadastro concluido!\n");
                break;

            case 2:
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
                break;

            case 3:

                // Comparações
                printf("\n\nComparacao de Cartas:");
                printf("\n\nArea: %d\n", areaKM1 > areaKM2);
                printf("\nPopulacao: %d\n", populacao1 > populacao2);
                printf("\nPIB per capita: %d\n", pib1 > pib2);
                printf("\nDensidade populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
                printf("\nSuper Poder: %d\n", power1 > power2);
                break;

            case 4:
                if (power1 > power2) {
                    printf("\n\nVencedor: %s\n", carta1);
                } else if (power2 > power1) {
                    printf("\n\nVencedor: %s\n", carta2);
                } else {
                    printf("\n\nEmpate!\n");
                }
                break;
        }

    }
}