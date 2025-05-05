//Implemente uma função trocar que receba dois ponteiros para inteiros e troque os valores entre eles.

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3, y = 8;
    trocar(&x, &y);
    printf("x: %d, y: %d\n", x, y); // Saída: x: 8, y: 3
    return 0;
}
