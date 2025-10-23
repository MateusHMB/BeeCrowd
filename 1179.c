#include  <stdio.h>
#include  <stdlib.h>
void imprime(char *nome, int *vetor, int n){
    for (int i = 0; i < n; i++){
        printf("%s[%d] = %d\n", nome, i, vetor[i]);
    }
}
int main(void){
    int valor, par[5], impar[5], npar, nimpar;
    npar = 0;
    nimpar = 0;

    for (int i = 0; i < 15; i++){
        scanf("%d", &valor);
        if (abs(valor) % 2 != 0){
            impar[nimpar++] = valor;
            if (nimpar == 5){
                imprime("impar", impar, nimpar);
                nimpar = 0;
            }
        }
        else{
            par[npar++] = valor;
            if (npar == 5){
                imprime("par", par, npar);
                npar = 0;
            }
        }
    }
    imprime("impar", impar, nimpar);
    imprime("par", par, npar);

    return 0;
}