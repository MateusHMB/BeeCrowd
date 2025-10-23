#include <stdio.h>
#include <string.h>

void imprimeGols(char *timeA, char *timeB, int golsA, int golsB, char resultado[], int pos) {
    if (golsA == 0 && golsB == 0) {
        resultado[pos] = '\0';
        printf("%s\n", resultado);
        return;
    }

    if (golsA > 0) {
        resultado[pos] = 'A';
        imprimeGols(timeA, timeB, golsA - 1, golsB, resultado, pos + 1);
    }

    if (golsB > 0) {
        resultado[pos] = 'B';
        imprimeGols(timeA, timeB, golsA, golsB - 1, resultado, pos + 1);
    }
}

int main() {
    char timeA[] = "Atletico";
    char timeB[] = "Flamengo";
    int m = 2; // Gols do time A
    int n = 1; // Gols do time B

    char resultado[100]; // Tamanho suficiente para guardar a sequência

    imprimeGols(timeA, timeB, m, n, resultado, 0);

    return 0;
}
