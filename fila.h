#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 1000

typedef struct{
    int valor;
    int id;
}TItem;

typedef struct{
    TItem Fitem[MAXTAM + 1];
    int Frente, Tras;
}TFila;

void InicializaFila(TFila* Ffila);
int FilaVazia(TFila* Ffila);
int InsereFila(TFila* Ffila, TItem* Fitem);
int RemoveFila(TFila* Ffila, TItem* Fitem);
