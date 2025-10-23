// #include <stdio.h>
// #include <stdlib.h>
// int main(void){
//     int a,b;
//     printf("Digites dois valores inteiros: ");
//     scanf("%d %d", &a, &b);
//     do{
//         printf("%d\n", a);
//         a++;
//     }while(a < b);
//     printf("Fim de programa\n");
//     return 0;
// }

#include <stdio.h>
int main(void){
    int i;
    do{
        printf("Escolha uma Opcao:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d", &i);
    }while((i < 1) ||(i > 3));
    printf("Voce escolheu a Opcao %d\n", i);
    return 0;
}
