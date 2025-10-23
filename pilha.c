#include "pilha.h"

void Inicaliza(Pilha *Ppilha){
    Ppilha->topo = 0;
}
int PilhaVazia(Pilha *Ppilha){
    return (Ppilha->topo == 0);
}
int Insere(Pilha *Ppilha, Itens* itens){
    if(Ppilha->topo == MAXTAM){
        return 0;
    }else{
        Ppilha->Vitem[Ppilha->topo] = *itens;
        Ppilha->topo++;
        return 1;
    }
}
int Retira(Pilha *Ppilha, Itens *itens){
    if(PilhaVazia(Ppilha)){
        return 0;
    }else{
        Ppilha->topo--;
        *itens = Ppilha->Vitem[Ppilha->topo];
        return 1;
    }
}
