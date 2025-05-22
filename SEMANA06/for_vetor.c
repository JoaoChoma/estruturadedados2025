#include <stdio.h>

int main()
{
    int v[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, v[i]);
    }

    return 0;
}