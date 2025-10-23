#include <stdio.h>
#include <math.h>

void equacoes(float x, float *quadrado, float *raiz){
    *quadrado = x * x;
    *raiz = sqrt(x);
}

int main(void) {
    float valor;
    float A, B;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    equacoes(valor, &A, &B);

    printf("Após utilizar a função, o valor do quadrado é %.2f e da raiz é %.2f\n", A, B);

    return 0;
}
