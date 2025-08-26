#include <stdio.h>

/*
    ===============================
    NÍVEL MESTRE — Resumo técnico
    ===============================
    - Torre, Bispo e Rainha: implementados com FUNÇÕES RECURSIVAS.
    - Bispo: além da recursão, usa LOOPS ANINHADOS (externo = vertical "Cima", interno = horizontal "Direita").
    - Cavalo: movimento em "L" (duas para Cima, uma para Direita) com LOOPS ANINHADOS,
      múltiplas variáveis no for e uso de continue/break para controle de fluxo.
    - Variáveis apenas do tipo inteiro e strings (via printf).
    - Saídas separadas por linhas em branco e padronizadas: "Cima", "Baixo", "Esquerda", "Direita".
*/

/* ===========================
   Parâmetros de movimentação
   =========================== */
const int TORRE_CASAS  = 5;  // Direita
const int BISPO_CASAS  = 5;  // Diagonal (Cima + Direita)
const int RAINHA_CASAS = 8;  // Esquerda

/* ===========================
   Funções recursivas
   =========================== */

/* Torre: move 'n' casas para a DIREITA (recursivo) */
void moverTorreRec(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverTorreRec(n - 1);
}

/* Bispo: move 'n' casas na diagonal (Cima + Direita).
   Requisito: recursividade + loops aninhados (externo vertical, interno horizontal).
   A cada chamada recursiva, fazemos 1 passo vertical (Cima) e 1 horizontal (Direita)
   usando loops aninhados; depois chamamos recursivamente para as casas restantes. */
void moverBispoRec(int n) {
    if (n <= 0) return;

    /* Loop EXTERNO = movimento vertical */
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        /* Loop INTERNO = movimento horizontal */
        int h = 0;
        while (h < 1) {
            printf("Direita\n");
            h++;
        }
    }

    moverBispoRec(n - 1);
}

/* Rainha: move 'n' casas para a ESQUERDA (recursivo) */
void moverRainhaRec(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverRainhaRec(n - 1);
}

/* ===========================
   Cavalo — Loops complexos
   ===========================
   Movimento pedido: 2 casas para CIMA e 1 para DIREITA (em "L").
   - Usa loops aninhados com múltiplas variáveis e condições.
   - Usa continue e break para controle de fluxo.
   Saída esperada:
     Cima
     Cima
     Direita
*/
void moverCavaloComplexo(void) {
    const int passosCima = 2;
    const int passosDireita = 1;
    const int totalEtapas = passosCima + passosDireita;

    /* for com múltiplas variáveis de controle:
       etapa = índice geral do processo
       c = contador de Cima já executados
       d = contador de Direita já executados
    */
    for (int etapa = 0, c = 0, d = 0; etapa < totalEtapas; etapa++) {

        /* Loop interno decide qual direção executar nesta etapa.
           Ele pode usar continue/break para controlar o fluxo. */
        int executado = 0;
        while (!executado) {
            /* Prioriza completar as sub-etapas de "Cima" primeiro */
            if (c < passosCima) {
                printf("Cima\n");
                c++;
                executado = 1;
                /* Já terminou a ação desta etapa: pula para a próxima etapa do for */
                continue;
            }

            /* Quando "Cima" estiver concluído, faz "Direita" */
            if (d < passosDireita) {
                /* Exemplo de uso de condição múltipla:
                   só executa Direita se todos os "Cima" estiverem prontos */
                if (c == passosCima) {
                    printf("Direita\n");
                    d++;
                    executado = 1;
                    /* Saímos do while; a etapa está concluída */
                    break;
                } else {
                    /* Proteção: se por algum motivo não concluiu "Cima", reitera */
                    continue;
                }
            }

            /* evitar loop infinito */
            break;
        }
    }
}

/* ===========================
   Programa principal
   =========================== */
int main(void) {
    /* Torre (recursivo) */
    printf("Movimento da Torre:\n");
    moverTorreRec(TORRE_CASAS);

    /* Bispo (recursivo + loops aninhados interno) */
    printf("\nMovimento do Bispo:\n");
    moverBispoRec(BISPO_CASAS);

    /* Rainha (recursivo) */
    printf("\nMovimento da Rainha:\n");
    moverRainhaRec(RAINHA_CASAS);

    /* Cavalo (loops complexos) */
    printf("\nMovimento do Cavalo:\n");
    moverCavaloComplexo();

    return 0;
}