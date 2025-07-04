#include <stdio.h>

struct Retangulo {
    float base;
    float altura;
};

float calcularArea(struct Retangulo r) {
    return r.base * r.altura;
}

int main() {
    struct Retangulo ret = {5.0, 2.0};
    printf("Área: %.2f\n", calcularArea(ret));
    return 0;
}