

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        // i++;  ← ESQUECIDO! Isso cria um laço infinito!
    }
    return 0;
}
