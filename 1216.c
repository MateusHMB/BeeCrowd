#include <stdio.h>
#include <string.h>

int main() {
    char linha[100];
    int total_distancia = 0;
    int quantidade_amigos = 0;
    int distancia;

    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        if (quantidade_amigos % 2 == 0) {
            // Nome do amigo, apenas lemos e ignoramos
        } else {
            sscanf(linha, "%d", &distancia);
            total_distancia += distancia;
        }
        quantidade_amigos++;
    }

    double media = (double) total_distancia / (quantidade_amigos / 2);
    printf("%.1lf\n", media);

    return 0;
}
