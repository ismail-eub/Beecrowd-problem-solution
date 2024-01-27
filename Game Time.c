#include <stdio.h>

int main()
{
    int s, e, d;


    scanf("%d %d", &s, &e);

    if (s < e)
    {
        d = e - s;
    }
    else
    {
        d = (24 - s) + e;
    }

    printf("O JOGO DUROU %d HORA(S)\n", d);

    return 0;
}
