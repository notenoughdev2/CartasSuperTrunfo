#include <stdio.h>

int main() {
    const int movimentosL = 1;

    printf("Movimento do Cavalo (L):\n");
    for (int i = 0; i < movimentosL; i++) {
        // Move duas vezes para baixo
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        // Move uma vez para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
