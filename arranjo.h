#ifndef ARRANJO_H
#define ARRANJO_H
#define MAXTAM 1000
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    int id;
}Item;

typedef struct{
    Item Vitens[MAXTAM];
    int primeiro, ultimo;
}Lista;

void InicializaArranjo(Lista* lista);
int ArranjoVazio(Lista* lista);
int InsereArranjo(Lista *lista, Item* itens);
int RemoveArranjo(Lista *lista, int p);
int Imprime(Lista *lista);

#endif
