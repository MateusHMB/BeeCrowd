#include "fila.h"

void InicializaFila(TFila *Ffila){
    Ffila->Frente = 0;
    Ffila->Tras = Ffila->Frente;
}
int FilaVazia(TFila *Ffila){
    return(Ffila->Tras == Ffila->Frente);
}

int InsereFila(TFila *Ffila, TItem *Fitem){
    if((Ffila->Tras + 1) % (MAXTAM + 1) == Ffila->Frente){
        return 0;
    }else{
        Ffila->Fitem[Ffila->Tras] = *Fitem;

        if(Ffila->Tras == MAXTAM){
            Ffila->Tras = 0;
        }else{
            Ffila->Tras++;
        }
        return 1;
    }
}

int RemoveFila(TFila *Ffila, TItem *Fitem){
    if(FilaVazia(Ffila)){
        return 0;
    }
    *Fitem = Ffila->Fitem[Ffila->Frente];
    if(Ffila->Frente == MAXTAM){
        Ffila->Frente = 0;
    }else{
        Ffila->Frente++;
    }
    return 1;
}
