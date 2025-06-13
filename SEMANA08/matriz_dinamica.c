#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3;
    int colunas = 4;

    // Alocação da matriz (ponteiro de ponteiro)
    int **matriz = malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para a linha %d.\n", i);
            return 1;
        }
    }

    // Preenchendo a matriz com os mesmos valores do exemplo anterior
    int valor = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = valor++;
        }
    }

    // Imprimindo a matriz
    printf("Conteúdo da matriz dinâmica 3x4:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]); // libera cada linha
    }
    free(matriz); // libera o vetor de ponteiros

    return 0;
}