#include <stdio.h>
#include <math.h>
int horario(int hora1, int minuto1, int hora2, int minuto2){
    hora1 = hora1 * 60;
    hora2 = hora2 * 60;
    int diferenca = abs((hora1 + minuto1) - (hora2 + minuto2));
    return diferenca;
}
int main(void){
    int horas1, horas2, minutos1, minutos2;
    scanf("%d", &horas1);
    scanf("%d", &minutos1);
    scanf("%d", &horas2);
    scanf("%d", &minutos2);
    int diferenca = horario(horas1, minutos1, horas2, minutos2);
    return 0;
}
