#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *cabeca;
    int tamanho;
} Lista;

void InicializarLista(Lista *lista);
int RemoverInicio(Lista *lista); // Adicionei a remoção para demonstrar a simplificação
void InserirInicio(Lista *lista, int num);
void Imprimir(Lista *lista);
