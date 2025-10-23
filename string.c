#include <stdio.h>
int main(void){
    char palavra[20];
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    printf("Palavra lida: %s\n", palavra);
    return 0;
}
