#include <stdio.h>

int ab(int a, int b)
{
    return b == 0 ? 1 : a * ab(a, b - 1);
}

int main()
{
    int a, b, r;
    scanf(“% d % d”, &a, &b);
    r = ab(a, b);
    printf(“% d”, r);
}