#include <stdio.h>

int main(){
  int i, a[10];
  for (i=0; i<10; i++)
    scanf("%d", &a[i]);
  int qtd_zeros = 0;
  for (i=0; i<10; i++)
    if (a[i]==0)
      qtd_zeros=qtd_zeros+1;
    printf("%d ", a[i]);
    printf("\n %d ", qtd_zeros);
  return 0;
}