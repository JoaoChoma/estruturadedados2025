#include <stdio.h>
#define PI 3.14159

// Definindo as structs
struct Circulo {
    float raio;
};

struct Retangulo {
    float base;
    float altura;
};

struct Triangulo {
    float base;
    float altura;
};

// Funções para cálculo de área
float calcularAreaCirculo(struct Circulo c) {
    return PI * c.raio * c.raio;
}

float calcularAreaRetangulo(struct Retangulo r) {
    return r.base * r.altura;
}

float calcularAreaTriangulo(struct Triangulo t) {
    return (t.base * t.altura) / 2;
}

int main() {
    int opcao;

    printf("Escolha a figura geométrica:\n");
    printf("1 - Círculo\n");
    printf("2 - Retângulo\n");
    printf("3 - Triângulo\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            struct Circulo c;
            printf("Digite o raio do círculo: ");
            scanf("%f", &c.raio);
            printf("Área do círculo: %.2f\n", calcularAreaCirculo(c));
            break;
        }
        case 2: {
            struct Retangulo r;
            printf("Digite a base do retângulo: ");
            scanf("%f", &r.base);
            printf("Digite a altura do retângulo: ");
            scanf("%f", &r.altura);
            printf("Área do retângulo: %.2f\n", calcularAreaRetangulo(r));
            break;
        }
        case 3: {
            struct Triangulo t;
            printf("Digite a base do triângulo: ");
            scanf("%f", &t.base);
            printf("Digite a altura do triângulo: ");
            scanf("%f", &t.altura);
            printf("Área do triângulo: %.2f\n", calcularAreaTriangulo(t));
            break;
        }
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}