#include <stdio.h>
void troca(float *ptr1, float *ptr2){
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(void){
    float a = 5.5, b = 10.2;

    printf("\nAntes de utilizar a funcao | A vale -- %f e B vale -- %f\n", a, b);

    troca(&a, &b);
    printf("Depois de trocar || A vale -- %f e B vale -- %f", a, b);

    return 0;
}
