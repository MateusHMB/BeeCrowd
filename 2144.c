#include <stdio.h>
int main(){
    int w1, w2, r;
    float media, final = 0.0;
    int total = 0;

    while (1)
    {
        scanf("%d %d %d", &w1, &w2, &r);
        if (w1 == 0 && w2 == 0 & r == 0){
            break;
        }

        media = ((w1 * (1 + r/ 30.0)) + (w2 * (1 + r / 30.0))) / 2.0;
        final += media;
        total++;

        if (media < 13) {
            printf("Nao vai da nao\n");
        } else if (media < 14) {
            printf("E 13\n");
        } else if (media < 40) {
            printf("Bora, hora do show! BIIR!\n");
        } else if (media < 60) {
            printf("Ta saindo da jaula o monstro!\n");
        } else {
            printf("AQUI E BODYBUILDER!!\n");
        }
    }
    final = final / total;
    if (final > 40){
        printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    }
    return 0;
}