#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *vetor;
    vetor = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++){
        vetor[i]= i;
    }
    // printando os valores
    for (int i = 0; i <10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);

    return 0;
}
