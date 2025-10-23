#include <stdio.h>
int main(void){
    int x, y, z;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    z = x > y ? x : y;
    printf("Maior = %d\n", z);
    return 0;
}
