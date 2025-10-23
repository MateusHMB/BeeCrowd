#include <stdio.h>
#include <string.h>
struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};
int main(void){
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;
    p2 = p;
    strcpy(p2.nome, "Ednaldo Pereira");
    printf("Nome pessoa 2 = %s | Idade = %d\n", p2.nome, p2.idade);

    return 0;
}
