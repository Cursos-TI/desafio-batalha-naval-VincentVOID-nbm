#include <stdio.h>

#define TAM 10       // Tamanho fixo do tabuleiro
#define NAVIO_TAM 3  // Tamanho fixo dos navios

int main() {
    int tabuleiro[TAM][TAM];  // Matriz que representa o tabuleiro
    int navioH[NAVIO_TAM];    // Vetor para navio horizontal
    int navioV[NAVIO_TAM];    // Vetor para navio vertical

    // 1. Inicializa o tabuleiro com 0 (água)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Define as posições iniciais (pré-definidas no código)
    int linhaH = 2;  // Linha inicial do navio horizontal
    int colunaH = 4; // Coluna inicial do navio horizontal

    int linhaV = 6;  // Linha inicial do navio vertical
    int colunaV = 7; // Coluna inicial do navio vertical

    // 3. Valida se os navios cabem no tabuleiro
    if (colunaH + NAVIO_TAM <= TAM && linhaV + NAVIO_TAM <= TAM) {

        // 4. Posiciona o navio horizontal
        for(int i = 0; i < NAVIO_TAM; i++) {
            navioH[i] = 3;  // Preenche o vetor do navio com valor 3
            tabuleiro[linhaH][colunaH + i] = navioH[i];  // Coloca na matriz
        }

        // 5. Posiciona o navio vertical
        for(int i = 0; i < NAVIO_TAM; i++) {
            navioV[i] = 3;  // Preenche o vetor do navio com valor 3
            tabuleiro[linhaV + i][colunaV] = navioV[i];  // Coloca na matriz
        }
    } else {
        printf("Erro: os navios não cabem no tabuleiro.\n");
        return 1;  // Encerra o programa com erro
    }

    // 6. Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}