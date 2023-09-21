#include <stdio.h>

int pode(int moedas[], int m, int v){
  if (v==0) return 1;
  if (m==0 || v<0) return 0;
  int ans = pode(moedas, m-1, v-moedas[m-1]);

  if (!ans)
    ans = pode(moedas, m-1, v);
  return ans;
}

int main() {
  int v, m, i;
  scanf("%d %d", &v, &m);
  int moedas[m];
  for (i=0; i<m; ++i)
    scanf("%d", &moedas[i]);
  int ans = pode(moedas,m,v);
  if (ans)
    printf("S\n");
  else
    printf("N\n");
  return 0;
}