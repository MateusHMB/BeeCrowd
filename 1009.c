#include <stdio.h>
int main(){
    char nome[100];
    double a,b;
    scanf("%s",&nome);
    scanf("%lf",&a);
    scanf("%lf",&b);
    double perc = (b * 15) / 100;
    double salario = a + perc;
    printf("TOTAL = R$ %.2lf\n", salario);
    return 0;
}