#include <stdio.h>

void dobrar(int *n) {
    *n = *n * 2;
}

int main() {
    int valor = 7;
    dobrar(&valor);
    printf("Valor dobrado: %d\n", valor); // Saída: 14
    return 0;
}
