#include <stdio.h>

int main() {
    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    // Bispo: Diagonal superior direita
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < passosBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: Direita
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < passosTorre; i++) {
        printf("Direita\n");
    }

    // Rainha: Esquerda
    printf("\nMovimento da Rainha:\n");
    for (int i = 0; i < passosRainha; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
