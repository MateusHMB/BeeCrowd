#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};
struct pessoa{
    char nome[50];
    int idade;
    struct endereco address;
};
int main(void){
    struct pessoa p;
    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';


    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    getchar();

    printf("Digite a rua: ");
    fgets(p.address.rua, sizeof(p.address.rua), stdin);
    p.address.rua[strcspn(p.address.rua, "\n")] = '\0';

    printf("Digite o numero: ");
    scanf("%d", &p.address.numero);

    getchar();

    return 0;
}
