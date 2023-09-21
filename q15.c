#include <stdio.h>

int transmissao(int infectados)
{
    int dias = 0;
    for (int i = 1; i <= infectados; i = i + 2)
    {
        dias++;
    }
    return dias;
}

int main()
{
    int infectados;
    scanf(“% d”, &infectados);
    printf(“Dias
           : % d”, transmissao(infectados));
    return 0;
}