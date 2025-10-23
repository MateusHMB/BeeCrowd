#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int JogaDado(int num_faces){
    int num_aleatorio = (rand() % num_faces) + 1;
    return num_aleatorio;
}
int TestaDados(){
    int soma = 0;
    int soma2 = 0;
    int soma3 = 0;
    for (int i = 0; i < 100; i ++){
        soma += JogaDado(10);
    }
    for (int j = 0; j < 50; j++){
        soma2 += JogaDado(20);
    }
    for (int k = 0; k < 1; k++){
        soma3 += JogaDado(100);
    }
    if (soma > soma2 && soma > soma3){
        return 10;
    }else if (soma2 > soma && soma2 > soma3){
        return 50;
    }else{
        return 100;
    }
}
int main(){
    srand(time(NULL));
    int resultado = TestaDados();
    printf("%d", resultado);
    return 0;
}


