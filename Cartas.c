#include <stdio.h>

struct carta
{
    int a,d,h;
};


typedef struct carta carta;

int prassodia(carta cartas[], int n, carta prasso, int q){
    if (prasso.a==0 && prasso.d==0 && prasso.h==0 && q>1)
        return 1;
    if (n==0 || prasso.a<0 || prasso.d<0 || prasso.h<0)
        return 0;
    int ans1=prassodia(cartas, n-1, prasso,q);
    prasso.a = prasso.a-cartas[n-1].a;
    prasso.d = prasso.d-cartas[n-1].d;
    prasso.h = prasso.h-cartas[n-1].h;
    int ans2 = prassodia(cartas,n-1,prasso, q+1);
    return ans1 || ans2;
}

int main(){
    int n, i;
    carta prasso;
    scanf("%d %d %d %d", &n, &prasso.a, &prasso.d, &prasso.h);
    carta cartas[n];
    for (i=0; i<n; ++i)
        scanf("%d %d %d", &cartas[i].a, &cartas[i].d, &cartas[i].h);
    int ans = prassodia(cartas, n, prasso,0);
    if (ans) printf("Y\n");
    else     printf("N\n");
    return 0;  
}