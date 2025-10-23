#include <stdio.h>
#include <math.h>
void equacoes(float x, float *quadrado, float *raiz){
    *quadrado = pow(x,2);
    *raiz = sqrt(x);
}
int main(void){
    float valor;
    float A, B;
    scanf("%f", &valor);

    equacoes(valor, &A, &B);

    printf("Apos utilizar a funcao O valor do quadrado e %.1f e da raiz e %.1f", A, B);
    return 0;
}
