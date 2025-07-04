#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int main() {
    struct Ponto pontos[3] = {
        {0, 0},
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < 3; i++) {
        printf("Ponto %d: (%d, %d)\n", i, pontos[i].x, pontos[i].y);
    }

    return 0;
}