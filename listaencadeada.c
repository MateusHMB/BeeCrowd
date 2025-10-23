#include "listaencadeada.h"

void InicializarLista(Lista *lista) {
    // 1. Aloca memória para o Nó Cabeça
    lista->cabeca = (No*) malloc(sizeof(No));

    if (lista->cabeca == NULL) {
        printf("Erro ao alocar memória para o Nó Cabeça!\n");
        exit(1); // Encerra em caso de falha crítica
    }

    // 2. O Nó Cabeça aponta para NULL (Lista vazia)
    lista->cabeca->proximo = NULL;
    lista->tamanho = 0;
    // O campo 'valor' do Nó Cabeça é irrelevante para a lista de dados.
}


// Insere um novo nó imediatamente após o Nó Cabeça
void InserirInicio(Lista *lista, int num) {
    No *novo = (No*) malloc(sizeof(No));

    if (novo != NULL) {
        novo->valor = num;

        // 1. O novo nó aponta para o antigo primeiro dado (ou NULL, se vazia)
        novo->proximo = lista->cabeca->proximo;

        // 2. O Nó Cabeça é atualizado para apontar para o novo nó
        lista->cabeca->proximo = novo;

        lista->tamanho++;
    } else {
        printf("Erro ao alocar memória para o novo nó!\n");
    }
}


// Remove o primeiro nó de dado (o nó imediatamente após a cabeça)
int RemoverInicio(Lista *lista) {
    // 1. Checa se o Cabeça aponta para NULL (Lista Vazia)
    if (lista->cabeca->proximo == NULL) {
        printf("ERRO: Lista está vazia. Nada a remover.\n");
        return 0; // Underflow
    }

    No *pAux = lista->cabeca->proximo;  // 2. Salva o nó a ser removido (o primeiro DADO)

    // 3. O Cabeça "pula" o nó removido, ligando-se ao próximo da sequência
    lista->cabeca->proximo = pAux->proximo;

    free(pAux);                          // 4. Libera a memória do nó removido
    lista->tamanho--;
    return 1;
}


// Imprime a lista, começando pelo primeiro nó de dado
void Imprimir(Lista *lista) {
    // Começa no primeiro nó de DADO (o nó apontado pelo Cabeça)
    No *no = lista->cabeca->proximo;

    printf("\n\tLista Encadeada: ");
    if (no == NULL) {
        printf("[Vazia]");
    }
    while(no != NULL) {
        printf("%d -> ", no->valor);
        no = no->proximo;
    }
    printf("NULL\n");
}
