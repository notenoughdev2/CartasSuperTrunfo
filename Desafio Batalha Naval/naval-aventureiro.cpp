#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio 1 – Horizontal
    for (int i = 0; i < 4; i++) tabuleiro[1][i] = 3;

    // Navio 2 – Vertical
    for (int i = 0; i < 3; i++) tabuleiro[i][6] = 3;

    // Navio 3 – Diagonal Principal (↘)
    for (int i = 0; i < 3; i++) tabuleiro[4 + i][4 + i] = 3;

    // Navio 4 – Diagonal Secundária (↙)
    for (int i = 0; i < 3; i++) tabuleiro[7 - i][2 + i] = 3;

    // Mostrar o tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
