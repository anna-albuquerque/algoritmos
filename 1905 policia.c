#include <stdio.h>

/*
Casos de testes: 2

'n' Entradas (Matriz 5x5):
0 0 0 0 1
1 1 0 0 1
0 1 0 0 0
0 0 0 1 1
1 1 0 0 0
 
0 0 0 0 1
1 1 0 0 1
0 1 0 0 0
0 0 1 1 1
1 1 0 0 0 
*/

int lab(char labirinto [5][5], int l, int c, int linha, int coluna, int passos) {
    if (linha==(l-1) && coluna==(c-1)) {
        printf("COPS \n");
        return 1;
    }
    if (linha<0 || linha >=1 || cocluna<0 ||coluna>=c || labirinto[linha][coluna]='ROBBERS') return 0;
    labirinto[linha][coluna]='COPS'
    int COPS = lab(labirinto, l, c, linha, coluna-1, passos+1);
    COPS = COPS + lab(labirinto,l,c,linha,coluna-1, passos+1);
    COPS = COPS + lab(labirinto,l,c,linha-1,coluna, passos+1);
    COPS = COPS + lab(labirinto,l,c,linha,coluna+1, passos+1);
    labirinto[linha][coluna]='COPS';
    return conseguiu
}