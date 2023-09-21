#include <stdio.h>

int main() {
  int i, tamanho;
  scanf ("%d", &tamanho);
  int a[tamanho];
  for (i=0; i<tamanho; ++i)
    scanf("%d", &a[i]);
    printf("a = { ");
  for (i=0; i<tamanho; ++i)
    printf("%d ", &a[i]);
    printf("} \n");
  return 0;
}