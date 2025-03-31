#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo
void movimentoBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        movimentoBispoRecursivo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// Movimento do Bispo com loops aninhados
void movimentoBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (usando recursão)
    printf("Movimento da Torre:\n");
    movimentoTorre(5);
    printf("\n");

    // Movimento do Bispo (usando recursão)
    printf("Movimento do Bispo (Recursão):\n");
    movimentoBispoRecursivo(5);
    printf("\n");

    // Movimento do Bispo (usando loops aninhados)
    printf("Movimento do Bispo (Loops aninhados):\n");
    movimentoBispoLoops(5);
    printf("\n");

    // Movimento da Rainha (usando recursão)
    printf("Movimento da Rainha:\n");
    movimentoRainha(8);
    printf("\n");

    // Movimento do Cavalo (usando loops complexos)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}
