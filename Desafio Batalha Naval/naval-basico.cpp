#include <stdio.h>

int main() {
    // Tabuleiro simples
    char tabuleiro[5][5];

    // Posição inicial dos navios
    int navioVerticalX = 1, navioVerticalY = 2;   // Posição inicial do navio vertical
    int navioHorizontalX = 3, navioHorizontalY = 1; // Posição inicial do navio horizontal

    // Simula navio vertical de tamanho 3
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }

    // Simula navio horizontal de tamanho 4
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }

    return 0;
}
