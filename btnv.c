#include <stdio.h>

#define TAM 10           // Tamanho fixo do tabuleiro
#define NAVIO_TAM 3      // Tamanho fixo dos navios
#define VALOR_NAVIO 3    // Valor usado para representar um navio

int main() {
    int tabuleiro[TAM][TAM];  // Matriz que representa o tabuleiro

    // 1. Inicializa o tabuleiro com 0 (água)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Define as posições iniciais
    int linhaH = 2;  // Linha inicial do navio horizontal
    int colunaH = 4; // Coluna inicial do navio horizontal

    int linhaV = 6;  // Linha inicial do navio vertical
    int colunaV = 7; // Coluna inicial do navio vertical

    // 3. Valida se os navios cabem no tabuleiro
    if (colunaH + NAVIO_TAM <= TAM && linhaV + NAVIO_TAM <= TAM) {

        // 4. Posiciona o navio horizontal
        for(int i = 0; i < NAVIO_TAM; i++) {
            tabuleiro[linhaH][colunaH + i] = VALOR_NAVIO;
        }

        // 5. Posiciona o navio vertical
        for(int i = 0; i < NAVIO_TAM; i++) {
            tabuleiro[linhaV + i][colunaV] = VALOR_NAVIO;
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
