#include <stdio.h>
#include <time.h>

int is_prime(long long n)
{
    long long i, divisores = 0;
    for (i = 1; i <= n; ++i)
        if (n % i == 0)
            divisores++;
    return divisores == 2 ? 1 : 0;
}

int main()
{
    long long n;
    clock_t inicio, fim;
    scanf("%lld", &n);
    inicio = clock();
    int ppp = is_prime(n);
    fim = clock();
    fprintf(stderr, "Tempo: %lld milisegundos.\n", (long long)((fim - inicio) * 1000) / CLOCKS_PER_SEC);
    if (ppp)
        printf("%lld é primo.\n", n);
    else
        printf("%lld não é primo.\n", n);
    return 0;
}