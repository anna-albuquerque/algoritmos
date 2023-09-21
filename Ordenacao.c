#include "ordenacao.h"

/* TODO: Implementar função */
int ordenado(int a[], int t){
int i;
for ( i=1 ; i<t ; ++i )
if (a[i]<a[i-1])
return 0;
return 1;
}

/* TODO: Implementar função */
void selecao(int a[], int t){
int i,j,menor,aux;
for ( i=0 ; i<t ; ++i ){
menor = i;
for ( j=i+1 ; j<t ; ++j )
if (a[j]<a[menor])
menor =j;
aux = a[i];
a[i] = a[menor];
a[menor]=aux;
}
}

/* TODO: Implementar função */
void insercao(int a[], int t){
int i,j,x;
for ( i=0 ; i<t ; ++i ){
x = a[i];
j=i-1;
while (j>=0 && a[j]>x){
a[j+1]=a[j];
j=j-1;
}
a[j+1]=x;
}
}