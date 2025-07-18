
#include <stdio.h>

#define TAM_MAX 100

typedef struct {
    int dados[TAM_MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

int estaVazia(Pilha *p) {
    return p->topo == -1;
}

int estaCheia(Pilha *p) {
    return p->topo == TAM_MAX - 1;
}

int push(Pilha *p, int valor) {
    if (estaCheia(p)) return 0;
    p->topo++;
    p->dados[p->topo] = valor;
    return 1;
}

int pop(Pilha *p, int *valorRemovido) {
    if (estaVazia(p)) return 0;
    *valorRemovido = p->dados[p->topo];
    p->topo--;
    return 1;
}

int topo(Pilha *p, int *valorTopo) {
    if (estaVazia(p)) return 0;
    *valorTopo = p->dados[p->topo];
    return 1;
}

int main() {
    Pilha p;
    inicializar(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    int x;
    if (pop(&p, &x)) {
        printf("Elemento removido: %d\n", x);
    }

    if (topo(&p, &x)) {
        printf("Topo atual: %d\n", x);
    }

    return 0;
}
