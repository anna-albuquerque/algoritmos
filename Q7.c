#include <stdio.h>
/*
    o retorno vai ser o que? Verdadeiro ou falso? O indice onde o elemento se encontra?
    Aqui vamos considerar Verdadeiro ou Falso.
*/
int FALSE = 0;
int TRUE = 1;

int busca(int a[], int size, int value)
{
    int found = 0; // 1 ou 2
    for (
        int i = 0; // 2
        i < size;  // size +1
        ++i        // size
    )
        if (a[i] == value) // 2 x size
            found = TRUE;  // 1
    break;                 // 1
}
return found; // 1
// 2 + 2 + size + 1 + size + 2size +1 +1 +1 = 4size + 8 = 4n + 8
}

int main()
{

    return 0;
}