#include <stdio.h>
int fatorial(int N){
    if (N == 0 || N == 1){
        return 1;
    }else{
    return N * fatorial(N - 1);
    }
}
int main(){
    int x;
    scanf("%d", &x);
    printf("O fatorial de %d é %d",x, fatorial(x));
    return 0;
}
