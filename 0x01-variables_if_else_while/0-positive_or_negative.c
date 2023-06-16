#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    srand(time(0));
    n = rand() % RAND_MAX;

    printf("Le nombre est %d\n", n);
    if (n > 0)
    {
        printf("est positif\n");
    }
    else if (n == 0)
    {
        printf("est zéro\n");
    }
    else
    {
        printf("est négatif\n");
    }

    return 0;
}

