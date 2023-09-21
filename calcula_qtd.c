#include <stdio.h>

void calcula_qtd(int a[], int n, int qtd[1000001]){
int i;
  for ( i=0; i<1000001; ++i ) qtd[i]=0;
  for ( i=0; i<n; ++i){
    int indice = a[i];
    qtd[indice] = qtd[indice]+1;
  }
}


int main(){
  int n, i;
  scanf("%d", &n);
  int a[n];
  for (i=0; i<n; i++) scanf("%d", &a[i]);
  int qtd[1000001];
  calcula_qtd(a,n,qtd);
  for (i=0; i<1000001; i++)
    if (qtd[i]!=0)
      printf("%d: %d\n", i,qtd[i]);
  return 0;
}