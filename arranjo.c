#include "arranjo.h"

void InicializaArranjo(Lista *lista){
    lista->primeiro = 0;
    lista->ultimo = lista->primeiro;
}

int ArranjoVazio(Lista *lista){
    return(lista->ultimo == lista->primeiro);
}

int InsereArranjo(Lista *lista, Item *itens){
    if(lista->ultimo == MAXTAM){
        return 0;
    }else{
        lista->Vitens[lista->ultimo++] = *itens;
    }
    return 1;
}

int RemoveArranjo(Lista *lista, int p){
    if(ArranjoVazio(lista)){
        return 0;
    }else{
        for (int count = p + 1; count < lista->ultimo; count++){
            lista->Vitens[count - 1] = lista->Vitens[count];
        }
    }
    return 1;
}

int Imprime(Lista *lista){
    for (int i = lista->primeiro; i <=lista->ultimo; i++){
        printf("%d %d",lista->Vitens[i].num, lista->Vitens[i].id);
    }
    return 1;
}
