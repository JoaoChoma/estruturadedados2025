#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3;
    int colunas = 4;

    // Aloca um vetor linear com espaço suficiente para a matriz 3x4
    int *v = malloc(linhas * colunas * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenche os dados simulando uma matriz
    int valor = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int k = i * colunas + j;
            v[k] = valor++;
        }
    }

    // Imprime os dados em formato de matriz
    printf("Conteúdo da matriz simulada com vetor linear 3x4:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int k = i * colunas + j;
            printf("%3d ", v[k]);
        }
        printf("\n");
    }

    // Liberação da memória
    free(v);

    return 0;
}