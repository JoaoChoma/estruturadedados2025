#include <stdio.h>

int main() {
    // Exemplo 1: Array de inteiros
    int numeros[5] = {1, 2, 3, 4, 5};
    printf("Array de inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Exemplo 2: Array de caracteres (string)
    char palavra[] = "exemplo";
    printf("Array de caracteres (string): %s\n", palavra);

    // Exemplo 3: Array bidimensional (matriz)
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("Array bidimensional:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}