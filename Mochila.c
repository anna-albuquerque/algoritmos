#include <stdio.h>

struct item{
int peso;
double valor;
};

void mochila_r( struct item itens[], int n, int cap, int preenchido,
struct item sol_itens[],int n_sol_tmp,
struct item sol_final[], int *n_sol_final,
double valor_atual,
double *valor_maximo
){
if (valor_atual>*valor_maximo){
for (int i=0 ; i<n_sol_tmp ; ++i)
sol_final[i]=sol_itens[i];
*valor_maximo=valor_atual;
*n_sol_final=n_sol_tmp;
}
if (n==0) return;
if (preenchido+itens[n-1].peso<=cap){
sol_itens[n-1]=itens[n-1];
mochila_r(itens,n-1, cap, preenchido+itens[n-1].peso,
sol_itens,n_sol_tmp+1,
sol_final,n_sol_final,
valor_atual+itens[n-1].valor,valor_maximo);
}
mochila_r(itens,n-1, cap, preenchido,
sol_itens,n_sol_tmp,
sol_final,n_sol_final,
valor_atual,valor_maximo);

}

int main(){
int i,n,peso_maximo, qtd_sol=0;
double valor_sol=0.0;
scanf("%d %d",&n,&peso_maximo);
struct item itens[n], sol_itens[n],sol_final[n];
for (i=0 ; i<n ; ++i)
scanf("%d",&itens[i].peso);
for (i=0 ; i<n ; ++i)
scanf("%lf",&itens[i].valor);
printf("Itens: { ");
for (i=0 ; i<qtd_sol; ++i){
printf(" (%d, %lf) ",itens[i].peso,itens[i].valor);
}


mochila_r(itens,n,peso_maximo,0,sol_itens,0,sol_final,&qtd_sol,0.0,&valor_sol);
printf("Quantidade de itens na solução : %d\n",qtd_sol);
printf("Valor carregado da solução : %lf\n",valor_sol);
printf("Solução: { ");
for (i=0 ; i<qtd_sol; ++i){
printf(" (%d, %lf) ",sol_final[i].peso,sol_final[i].valor);
}
printf("}\n");
return 0;
}