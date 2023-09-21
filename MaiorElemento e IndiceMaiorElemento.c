#include <stdio.h>

int maiorElemento (int a[], int tamanho){
  int i, maior=a[0];
  for ( i=1; i<tamanho; ++i)
    if (a[i]>maior)
      maior=a[i];
  return maior;
}

int indiceMaiorElemento (int a[], int tamanho){
  int i, indice_maior=0;
  for (i=1; i<tamanho; ++i)
    if (a[i]>a[indice_maior])
      indice_maior=i;
  return indice_maior;
}

int main() {
    int i, tamanho;
  scanf("%d", &tamanho);
  int a[tamanho];
  for ( i=0; i<tamanho; i++)
    scanf("%d", &a[i]);
  printf("Maior elemento: %d\n", maiorElemento(a, tamanho));
    printf("Indice maior elemento: %d\n", indiceMaiorElemento(a, tamanho));
    return 0;
}