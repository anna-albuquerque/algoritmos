#include <stdio.h>

/*
012345
0 PPPPPB
1 PPBCPB
2 CCCBPB
3 BPPPPB
4 BPCCCC
5 BPPPPB
*/

int lab(char labirinto[10][10], int l, int c,
int linha, int coluna, int passos){
if (linha==(l-1) && coluna==(c-1)) {
printf("Cheguei em %d passos.\n",passos);
return 1;
}
if (linha<0 || linha>=l || coluna<0 || coluna>=c
|| labirinto[linha][coluna]!='B') return 0;
labirinto[linha][coluna] = 'P';
int conseguiu = lab(labirinto,l,c,linha+1,coluna,passos+1);
conseguiu = conseguiu + lab(labirinto,l,c,linha,coluna-1, passos+1);
conseguiu = conseguiu + lab(labirinto,l,c,linha-1,coluna, passos+1);
conseguiu = conseguiu + lab(labirinto,l,c,linha,coluna+1, passos+1);
labirinto[linha][coluna] = 'B';
return conseguiu;

}

int main(){
int l,c,i,j;
char labirinto[10][10];
scanf("%d %d",&l,&c);
for (i=0 ; i<l ; ++i)
for (j=0 ; j<c ; ++j)
scanf(" %c",&labirinto[i][j]);

for (i=0 ; i<l ; ++i){
for (j=0 ; j<c ; ++j){
printf("%c",labirinto[i][j]);
}
printf("\n");
}
int x = lab(labirinto,l,c,0,0,1);

if (x!=0){
printf("Sim: %d caminhos diferentes\n",x);
} else{
printf("Não!\n");
}
return 0;
}