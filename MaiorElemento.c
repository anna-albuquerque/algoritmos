#include <stdio.h>

int maiorElemento (int a[], int tamanho){
  int i, maior=a[0];
  for ( i=1; i<tamanho; ++i)
    if (a[i]>maior)
      maior=a[i];
  return maior;
}

int main() {
    int i, tamanho;
  scanf("%d", &tamanho);
  int a[tamanho];
  for ( i=0; i<tamanho; i++)
    scanf("%d", &a[i]);
  printf("Maior elemento: %d\n", maiorElemento(a, tamanho));
    return 0;
}