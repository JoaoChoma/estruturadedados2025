#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;

    *ptr = 10;

    printf("Novo valor de a: %d\n", a); // Saída: 10

    return 0;
}
