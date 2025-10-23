#include <stdio.h>
#include <string.h>
int main(void){
    char str[30]= "Mateus Henrique Machado Braz";
    char vogais[11]  = "aeiouAEIOU";
    int i, j, total = 0;
    int tam1 = strlen(str);
    int tam2 = strlen(vogais);

    for (i = 0; i < tam1; i++){
        for (j = 0; j < tam2; j++){
            if (str[i] == vogais[j]){
                total++;
                break;
            }
        }
    }
    printf("Numero de vogais = %d\n", total);
    return 0;
}
