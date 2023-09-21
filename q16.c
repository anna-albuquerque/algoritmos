#include <stdio.h>

int funcao(int massa)
{
    int u = 0;
    for (int i = massa; i >= 1; i = i / 2)
    {
        u++;
    }
    return u - 1;
}

int main()
{
    int massa, tempo;
    scanf("%d %d", &massa, &tempo);
    printf("%d", funcao(massa));

    return 0;
}