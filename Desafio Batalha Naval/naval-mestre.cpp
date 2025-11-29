#include <stdio.h>

#define TAM 5

// Exibe a matriz com legenda
void exibirMatriz(int matriz[TAM][TAM], const char* nome) {
    printf("\nHabilidade: %s\n", nome);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};

    // Preencher cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < TAM; j++) cone[2][j] = 1;

    // Preencher cruz
    for (int i = 0; i < TAM; i++) cruz[1][i] = 1;
    for (int i = 0; i < TAM; i++) cruz[i][2] = 1;

    // Preencher octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Mostrar todas
    exibirMatriz(cone, "Cone");
    exibirMatriz(cruz, "Cruz");
    exibirMatriz(octaedro, "Octaedro");

    return 0;
}
