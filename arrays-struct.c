#include <stdio.h>
#include <string.h>
struct pessoa{
  char nome[50], rua[50];
  int idade, numero;
};
int main(void){
    struct pessoa p[4];
    for (int i = 0; i < 4; i++){
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(p[i].nome, sizeof(p[i].nome), stdin);

        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &p[i].idade);

        getchar();

        printf("Digite a rua da pessoa %d: ", i + 1);
        fgets(p[i].rua, sizeof(p[i].rua), stdin);

        p[i].rua[strcspn(p[i].rua, "\n")] = '\0';

        printf("Digite o numero da pessoa %d: ", i + 1);
        scanf("%d", &p[i].numero);

        getchar();
    }
    for (int i = 0; i < 4; i++){
        printf("Pessoa %d: ", i + 1);
        printf("Nome = %s | Idade = %d | Rua == %s | Numero = %d\n", p[i].nome, p[i].idade, p[i].rua, p[i].numero);
    }
return 0;
}
