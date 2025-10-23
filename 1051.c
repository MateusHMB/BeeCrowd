#include <stdio.h>
int main(){
    double x;
    double imposto;
    scanf("%lf", &x);
    if (x < 2000.01){
        printf("Isento\n");
    }
    else if (x <= 3000.00){
        imposto = (x - 2000.00) * 0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else if (x <= 4500.00){
        imposto = (1000.00 * 0.08) + (x - 3000.00) * 0.18;
        printf("R$ %.2lf\n", imposto);
    }
    else{
        imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + (x - 4500.00) * 0.28;
        printf("R$ %.2lf\n", imposto);
    }
    return 0;
}