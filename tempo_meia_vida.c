#include <stdio.h>

int tempo_meia_vida (int mi, int t){
    int tempo = 0, massa = mi;
    while (massa>1){
        tempo = tempo+t;
        massa = massa/2;
    }
    return tempo;
}

int main(){
    int mi, t;
    scanf ("%d %d", &mi, &t);
    printf ("%d segundos. \n", tempo_meia_vida)
    return 0;
}