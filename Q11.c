#include <stdio.h>

int FALSE = 0;
int TRUE = 1;
int existe_soma(int a[], int n, int s){
    int existe = FALSE;
    int contador = 0;
    for (int i=0; i<n; ++i)     // n
    {
        for (int j=i+1; j<n; ++j)   // (n-1) + (n-2) + ... + 2 + 1
        {
            contador++;
            if (a[i]+a[j] == s)     // 
            {
                existe = TRUE;      //
            }
        }
    }
    return 1;                   
}
                                    // (1+n)*n/2 ---> (n^2+n)/2 ---> 1/2*n^2+1/2*n ---> O(n^2)
printf("Contador = %d\n", contador);
return 0;
}

int n, s;
scanf("%d %d", &n, &s);
int a[n];
for (int i = 0; i < n; ++i)
    scanf("%d", &a[i]);_getc_nolock
if (existe_soma(a, n, s))
    printf("Existe\n");
else
    printf("Não existe!\n");
return 0;
}