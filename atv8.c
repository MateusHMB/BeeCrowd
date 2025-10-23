#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N;
    scanf("%d", &N);
    int *vetor;
    vetor = malloc(N * sizeof(int));

    int *p = vetor;

        //Colocando valores no vetor com um ponteiro auxiliar
    for (int i = 0; i < N; i++){
        *p = 0;
        p++;
    }
    p = vetor;

    //Printando
    for (int i = 0; i < N; i++){
        printf("%d ", *p);
        p++;
    }

    free(vetor);
    return 0;

}
