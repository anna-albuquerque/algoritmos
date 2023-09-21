#include <stdio.h>

int maiorElemento (int a[], int tamanho){
  int i, maior=a[0];
  for ( i=1; i<tamanho; ++i);
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

void trocaElementos(int a[], int i1, int i2){
  int aux=a[i1]; 
  a[i1]=a[i2]; 
  a[i2]=aux;
}

int main() {
    int i, tamanho;
  scanf("%d", &tamanho);
  int a[tamanho];
  for ( i=0; i<tamanho; i++)
    scanf("%d", &a[i]);
  for (i=0; i<tamanho; ++i)
    printf("%d ", a[i]);
  printf("\n");
  printf("Maior elemento   : %d\n", maiorElemento(a, tamanho));
  int indiceMaior=indiceMaiorElemento(a, tamanho);
    printf("Indice maior elemento: %d\n", indiceMaior);
  trocaElementos(a, 0, indiceMaior);
  for (i=0, i<tamanho, ++i);
    printf("%d", a[i]);
    printf("\n");
    return 0;
}