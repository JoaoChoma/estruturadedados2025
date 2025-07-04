#include <stdio.h>
#include <stdlib.h>

struct Ponto {
    float x;
    float y;
};

int main(int argc, char const *argv[])
{
    /* code */
struct Ponto p1; // Declara uma variável chamada 'p1' do tipo 'struct Ponto'
struct Ponto p2; // Declara outra variável, 'p2'

// Acessa o membro 'x' da variável 'p1' e guarda o valor 10.5 nele.
p1.x = 10.5;

// Acessa o membro 'y' da variável 'p1' e guarda o valor 20.0 nele.
p1.y = 20.0;

printf("A coordenada X do ponto p1 e: %f\n", p1.x);
printf("A coordenada Y do ponto p1 e: %f\n", p1.y);
    
    return 0;
}
