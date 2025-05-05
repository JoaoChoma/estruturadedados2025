// Escreva uma função que, usando ponteiros, encontre o maior valor em um vetor.

#include <stdio.h>

int maior(int *v, int n) {
    int maior = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) > maior) {
            maior = *(v + i);
        }
    }
    return maior;
}

int main() {
    int v[] = {7, 3, 9, 1, 12};
    printf("Maior valor: %d\n", maior(v, 5)); // Saída: 12
    return 0;
}
