#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("Endereço de p: %p\n", &(*p));

    return 0;
}
