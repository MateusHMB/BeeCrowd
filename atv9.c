#include <stdio.h>
int caracteres(char str[]){
    int tamanho = 0;
    printf("String: %s\n", str);

    while (str[tamanho] != '\0'){
        tamanho ++;
    }
    return tamanho;
}

int main(void){
    char texto[] = "Ednaldo Pereira";

    int tamanho = caracteres(texto);

    printf("Tamanho da string: %d\n", tamanho);
    return 0;

}
