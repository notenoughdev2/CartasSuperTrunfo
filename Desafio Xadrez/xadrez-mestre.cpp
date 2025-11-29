#include <stdio.h>

// Funções recursivas para movimentos
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Cavalo com múltiplas condições e controle de fluxo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 3 || j < 2; i++, j++) {
        if (i >= 2) break; // O cavalo move só 2 para cima
        printf("Cima\n");

        if (j == 1) {
            printf("Direita\n"); // Quando chegar em 2 pra cima, vai 1 pra direita
            continue;
        }
    }
}

int main() {
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}
