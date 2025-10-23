#include <stdio.h>
int main(){
    float x;
    float y;
    scanf("%f",&x);
    scanf("%f",&y);
    float media = ((x * 3.5) + (y * 7.5)) / 11;
    printf("MEDIA = %.5f\n",media);
    return 0;
}
