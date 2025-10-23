#include <stdio.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};
int main(void){
    struct pessoa p;
    p.idade = 31;
    printf("Digite o numero de sua residencia: ");
    scanf("%d\n", &p.numero);
    printf("Digite o seu nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.numero = p.numero + p.idade - 100;

    return 0;
}
