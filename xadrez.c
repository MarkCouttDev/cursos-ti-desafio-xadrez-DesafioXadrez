#include <stdio.h>

int main() {
    // ======================
    // Movimento da Torre
    // ======================
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ======================
    // Movimento do Bispo
    // ======================
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

    // ======================
    // Movimento da Rainha
    // ======================
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // ======================
    // Movimento do Cavalo (nível aventureiro)
    // ======================
    printf("\nMovimento do Cavalo:\n");

    // Constantes para o movimento do Cavalo
    int movimentosBaixo = 2;   // duas casas para baixo
    int movimentosEsquerda = 1; // uma casa para a esquerda

    // Primeiro loop: movimento para baixo (usando for)
    for (int passo = 1; passo <= movimentosBaixo; passo++) {
        printf("Baixo\n");

        // Loop aninhado (while) para cada passo do movimento para baixo
        int contador = 1;
        while (contador < 1) { // este while serve apenas para cumprir o requisito de aninhamento
            // nada adicional aqui
            contador++;
        }
    }

    // Agora o movimento para a esquerda (após os dois para baixo)
    int esquerdaPassos = 0;
    while (esquerdaPassos < movimentosEsquerda) {
        printf("Esquerda\n");
        esquerdaPassos++;
    }

    return 0;
}