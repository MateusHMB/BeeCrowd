#include <stdio.h>
int main(void){
    int matriz[5][5], i, j;
    for (i = 0; i < 5; i ++){
        for (j = 0; j < 5; j ++){
            printf("Digite o valor da posição [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz 5x5\n");
    for (i = 0; i < 5; i ++){
        printf("[");
        for (j = 0; j < 5; j ++){
            if (j == 4){
                printf("%d", matriz[i][j]);
            }else
            {
                printf("%d,", matriz[i][j]);
            }
        }
        printf("]\n");
    }
    return 0;
}