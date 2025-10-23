#include <stdio.h>
int main(void){
    int m = 5, n = 5;
    int matriz[5][5] = {0};
    int cima = 0, baixo = m - 1, esquerda = 0, direita = n - 1;
    int num = 1;
    while(cima <= baixo && esquerda <= direita){
        for (int i = esquerda; i <= direita; i++){
            matriz[cima][i] = num++;
        }
        cima++;

        for (int i = cima; i <= baixo; i++){
            matriz[i][direita] = num++;
        }
        direita--;
        if (cima <= baixo){
            for (int i = direita; i >= esquerda; i--){
                matriz[baixo][i] = num++;
            }
            baixo--;
        }
        if (esquerda <= direita){
            for (int i = baixo; i >= cima; i--){
                matriz[i][esquerda] = num++;
            }
            esquerda++;
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
