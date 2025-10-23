#include <stdio.h>
int main(void){
    int k=1;
    float matriz[12][12];
    char O;
    scanf("%c", &O);
    for (int i = 0; i < 12; i++){
     for (int j = 0; j < 12; j++){
        scanf("%f", &matriz[i][j]);
     }
    }
    float soma = 0;
    int contador = 0;
    for (int i = 11; i > 6; i--){
        for (int j = k; j < 12 - k; j++){
            soma += matriz[i][j];
            contador ++;
            k++;
        }
    }
    if (O == 'S'){
        printf("%.1f\n", soma);
    }
    else if (O == 'M'){
        printf("%.1f\n", (soma / contador));
    }
    return 0;
}
