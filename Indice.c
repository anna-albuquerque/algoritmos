#include <stdio.h>

int main(){
  int a[10]; /* para ir de 0 a 9*/
  int indice;
  scanf("%d", &indice);
  float notas[15]; /* para ir de 0 a 14*/
  a[indice]=10;
  a[indice+1]=20;
  printf("a[%d] = %d\n", indice, a[indice]);
  printf("a[%d] = %d\n", indice+1, a[indice+1]);
  return 0;
}