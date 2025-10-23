#include "listaencadeada.h"
#include <stdlib.h>

int main(){
    int opcao, valor, anterior;
    No *lista = NULL;
    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - Imprimir\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                InserirInicio(&lista, valor);
                break;
            case 2:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                InserirFim(&lista, valor);
                break;
            case 3:
                printf("Digite um valor e um valor de referencia: ");
                scanf("%d %d", &valor, &anterior);
                InserirMeio(&lista, valor, anterior);
                break;
            case 4:
                Imprimir(lista);
                break;
            default:
            if(opcao != 0){
                printf("Operacao invalida");
            }
        }
    }while(opcao != 0);
    return 0;
}
