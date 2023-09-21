#include <stdio.h>

int primo (long long n){
    long long i;
    if (n%2==0) return 0;
    for (i=3; i<n/2+1; i+=2) {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main (){
    long long n;
    scanf("%lld", &n);
    if (primo(n))
        printf("%lld é primo\n", n);
    else
        printf("%lld não é primo\n", n);
        return 0;
}