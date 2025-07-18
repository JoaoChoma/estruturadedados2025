
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *proximo;
} No;

typedef struct {
    No *topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = NULL;
}

int estaVazia(Pilha *p) {
    return p->topo == NULL;
}

int push(Pilha *p, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) return 0;

    novo->dado = valor;
    novo->proximo = p->topo;
    p->topo = novo;
    return 1;
}

int pop(Pilha *p, int *valorRemovido) {
    if (estaVazia(p)) return 0;

    No *remover = p->topo;
    *valorRemovido = remover->dado;
    p->topo = remover->proximo;
    free(remover);
    return 1;
}

int topo(Pilha *p, int *valorTopo) {
    if (estaVazia(p)) return 0;

    *valorTopo = p->topo->dado;
    return 1;
}

void liberar(Pilha *p) {
    int aux;
    while (pop(p, &aux));
}

int main() {
    Pilha p;
    inicializar(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    int x;
    if (pop(&p, &x)) {
        printf("Removido: %d\n", x);
    }

    if (topo(&p, &x)) {
        printf("Topo: %d\n", x);
    }

    liberar(&p);

    return 0;
}
