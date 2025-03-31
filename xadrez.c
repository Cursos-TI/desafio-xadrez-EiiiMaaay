#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // Movimento do Cavalo (usando loops aninhados)
    printf("Movimento do Cavalo:\n");

    // Movimento em "L": duas casas para baixo e uma para a esquerda
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    printf("Esquerda\n");

    return 0;
}
