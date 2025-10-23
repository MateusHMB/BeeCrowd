// strlen - Tamanho da string
// strcopy - Copiar uma string
// strcat - Concatenar duas strings
// strcmp - Comparar duas strings
#include <stdio.h>
#include <string.h>
int main(void){
    char palavra1[20] = "Linguagem C";
    char palavra2[30] = "LINGUAGEM C";

    if (strcmp(palavra1, palavra2) == 0){
        printf("Strings iguais\n");
    }else{
        printf("Strings diferentes\n");
    }

    return 0;
}
