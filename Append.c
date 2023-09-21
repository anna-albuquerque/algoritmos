#include <stdio.h>

/* Adiciona um inteiro ao final do vetor.
Retorna o novo tamanho do vetor */

int append_int(int a[], int tamanho, int capacidade, int x){
/* {1 3 2} 
    0 1 2 
*/
if (tamanho==capacidade)
  return tamanho;
  
  a[tamanho] = x;
  return tamanho+1;
}

void print_vector(int a[], int tamanho){
  printf("{ ");
  int i;
  for (i=0; i<tamanho; ++i)
    printf("%d ", a[i]);
    printf("} \n");
}
int main() {
  int capacidade=100, tamanho=0;
  int a[capacidade];
  tamanho = append_int(a, tamanho, capacidade, 10);
  print_vector(a, tamanho);
  tamanho = append_int(a, tamanho, capacidade, 21);
  print_vector(a, tamanho);
  return 0;
}