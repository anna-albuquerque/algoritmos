#include <stdio.h>

/* Adiciona um inteiro ao final do vetor.
Retorna o novo tamanho do vetor */

int append_int(int a[], int tamanho, int capacidade, int x, int index){
/* {1 3 2} 
    0 1 2 
*/
if (tamanho==capacidade)
  return tamanho;
  int i;
  tamanho++;
  for (i=tamanho; i>index; --i)
    a[i]=a[i-1];
  a[index] = x;
  return tamanho;
}

void print_vector(int a[], int tamanho){
  printf("{ ");
  int i;
  for (i=0; i<tamanho; ++i)
    printf("%d ", a[i]);
    printf("} \n");
}
int main() {
  int i, capacidade=10000, tamanho=0;
  int a[capacidade];
  for (i=0; i<5; ++i)
    tamanho = append_int(a, tamanho, capacidade, i*3);
  print_vector(a, tamanho);
  tamanho = insert_int(a, tamanho, capacidade, 5, 2)
  print_vector(a, tamanho)
  return 0;
}