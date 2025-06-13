#include <stdio.h>

int main() {
    // Declarando uma matriz 3x4 com valores fixos
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Imprimindo os valores da matriz
    printf("Conteúdo da matriz 3x4:\n");

    for (int i = 0; i < 3; i++) {          // percorre as linhas
        for (int j = 0; j < 4; j++) {      // percorre as colunas
            printf("%3d ", matriz[i][j]);  // imprime cada elemento
        }
        printf("\n");
    }

    return 0;
}