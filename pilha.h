#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 1000

typedef struct{
    int valor;
    int id;
}Itens;

typedef struct{
    Itens Vitem[MAXTAM];
    int topo;
}Pilha;

void Inicaliza(Pilha* Ppilha);
int PilhaVazia(Pilha* Ppilha);
int Insere(Pilha* Ppilha, Itens* itens);
int Retira(Pilha *Ppilha, Itens* itens);
